/*

Question id   :https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/?purpose=login&source=problem-page&update=google
Question name :monk-and-divisor-conundrum
Level         : Medium
Platform	  :Hackerearth
Topic		  : Sieve , divisor , counting multiple , gcd , lcm , inclusion , exclusion


*/

#include<bits/stdc++.h>
using namespace std;

// Constants: Maximum size for the hash and multiple count arrays (N = 2 * 10^5 + 10)
const int N=2e5+10;
int hsh[N];            // hsh[i] will store the count of occurrences of number 'i' in the input array.
int multiple_ct[N];     // multiple_ct[i] will store the count of numbers that are multiples of 'i'.

int main()
{
    // These lines are for handling input and output when testing locally (for competitive programming, usually removed online)
    #ifndef ONLINE_JUDGE 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // Fast input-output optimization
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // Input: Number of elements in the array
    int n;
    cin >> n;

    // Reading the array of numbers and incrementing their occurrence in the hsh array
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        hsh[x]++;   // Store how many times 'x' appears in the input
    }

    // Precomputing multiple counts for each i (1 ≤ i < N)
    for(int i = 1; i < N; i++) { // Start from i = 1, as no divisor is 0
        // For each i, iterate through its multiples j = i, 2i, 3i, ..., and add the count of multiples
        for(int j = i; j < N; j += i) {
            multiple_ct[i] += hsh[j];  // multiple_ct[i] stores the count of all numbers divisible by i
        }
    }

    // Input: Number of queries
    int q;
    cin >> q;

    // Process each query
    while(q--) {
        int p, q;
        cin >> p >> q;

        // Calculate the LCM (Least Common Multiple) of p and q using the formula:
        // LCM(p, q) = (p * q) / GCD(p, q)
        long long lcm = p * 1LL * q / __gcd(p, q);

        // Answer is the sum of the count of multiples of p and multiples of q
        long long ans = multiple_ct[p] + multiple_ct[q];

        // If the LCM of p and q is less than N, subtract the count of multiples of LCM (as they are double-counted)
        if(lcm < N) ans -= multiple_ct[lcm];

        // Output the result for this query
        cout << ans << endl;
    }
}


/*
n = 6
Input list: 2, 3, 6, 9, 12, 15
After processing the input list, hash[] looks like this (non-zero entries):
less
Copy code
hash[2] = 1  // The number 2 appears once.
hash[3] = 1  // The number 3 appears once.
hash[6] = 1  // The number 6 appears once.
hash[9] = 1  // The number 9 appears once.
hash[12] = 1 // The number 12 appears once.
hash[15] = 1 // The number 15 appears once.

i = 2: Now, count multiples of 2.

j = 2, 4, 6, 8, 10, 12, ...
We add the count of each multiple from hash[]:
css
Copy code
multiple_ct[2] += hash[2]  -> multiple_ct[2] = 1  (from hash[2] = 1)
multiple_ct[2] += hash[4]  (but hash[4] = 0)
multiple_ct[2] += hash[6]  -> multiple_ct[2] = 2  (from hash[6] = 1)
multiple_ct[2] += hash[12] -> multiple_ct[2] = 3  (from hash[12] = 1)
So, after processing i = 2, multiple_ct[2] = 3. 
This means there are 3 numbers divisible by 2 (which are 2, 6, and 12).

*/