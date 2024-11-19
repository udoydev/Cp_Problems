/*
https://www.hackerrank.com/challenges/30-bitwise-and/problem
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
        int a, b;
        cin >> a >> b;
        int ans = 0;
        for (int i = 1; i < a; i++)
        {

            for (int j = i + 1; j <= a; j++)
            {
                if ((i & j) < b)
                {
                    int ans1 = (i & j);
                    // cout << ans1 << " ";
                    ans = max(ans, ans1);
                }
            }
            // cout << endl;
        }
        cout << ans << endl;
    }

    // return with 0
    return 0;
}