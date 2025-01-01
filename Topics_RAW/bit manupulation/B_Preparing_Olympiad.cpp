
/*
link : https://codeforces.com/problemset/problem/550/B

rating : 1400

difficult : medium

*/

#include <bits/stdc++.h>
using namespace std;
int check_bit(int k, int index)
{
    return (1 & (k >> index)); // checking that k th bit is set or not
}
int main()
{
    // write your code here
    int n, l, r, x; // taking all the variable and inputs
    cin >> n >> l >> r >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0; // declaring final output variable and assign 0 
    // now generating subset --- (1<<n)=2^n
    for (int sub = 0; sub < (1 << n); sub++) // loop through all the subsets of n -- (0 to 2^n-1)
    {
        int c = 0, mn = INT_MAX, mx = INT_MIN, sum = 0; // taking essential things
        for (int j = 0; j < n; j++) // loop till 0 to n-1
        {
            if (check_bit(sub, j)) // checking the if the i th subset is set or not for(0 to n-1)
            {
                c++; // if it is true count ++
                sum += a[j]; // find the sum of those values
                mx = max(mx, a[j]); // than find the max value from that 
                mn = min(mn, a[j]); // find the min value from that 
            }
        }
        if (c > 1) // checking c > 1 or not as question must be 2
        {
            if ((sum >= l && sum <= r) && (mx - mn >= x))
            // if sum is grater or equal than l or easier one and less than difficult one 
            // and mzx-min value is == the difference x than count the ans 
            // the ans will be the combination number of the questions that need to be set
                ans++;
        }
    }
    cout << ans << endl;
    // return with 0
    return 0;
}