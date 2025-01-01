/*
https://codeforces.com/problemset/problem/1097/B
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = 1 << n; // finding all the combination of n (by applying power of 2)
    int sum;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (((1 << j) & i))
                sum += a[j];
            else
                sum -= a[j];
        }
        if (sum % 360 == 0)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    // return with 0
    return 0;
}

// revisit again