#include <bits/stdc++.h>
using namespace std;

int main()
{
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

        int f = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) == 5 || abs(a[i] - a[i + 1]) == 7)
            {
                f++;
            }
        }

        if (n - 1 == f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
