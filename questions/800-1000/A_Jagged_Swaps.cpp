/*
https://codeforces.com/problemset/problem/1896/A
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (a[0] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    // return with 0
    return 0;
}