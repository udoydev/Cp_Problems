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
        int a[2 * n];
        int ct = 0;
        int ct1 = 0;
        if (n == 0)
            cout << 0 << " " << 0 << endl;
        for (int i = 1; i <= 2 * n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= 2 * n; i++)
        {
            if (a[i] == 0)
                ct++;
            else
                ct1++;
        }
        if (ct == 0)
            cout << "0 0" << endl;
        else
        {
            if (ct >= ct1)
                cout << ct % 2 << " " << ct1 << endl;
            else
                cout << ct1 % 2 << " " << ct << endl;
        }
    }
    // return with 0
    return 0;
}