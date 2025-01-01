/*
https://codeforces.com/problemset/problem/579/A
*/

#include <bits/stdc++.h>
using namespace std;
// set bit count question
int main()
{
    // write your code here
    long long n;
    cin >> n;

    int c = 0;
    while (n > 0)
    {
        c += (n & 1); // c  will be incremented if n&1 gives true
        n >>= 1;      // checking for the next bit
    }
    cout << c << endl;

    // return with 0
    return 0;
}