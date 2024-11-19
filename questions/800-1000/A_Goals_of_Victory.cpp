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

        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
        }

        int s = 0;
        int s1 = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < 0)
                s += a[i]; //-4
            else
                s1 += a[i]; // 3+5=8
        }

        int ans = (-(s)-s1); // -8 - (-4) = -8 + 4 = -4
        cout << ans << endl;
    }

    // return with 0
    return 0;
}