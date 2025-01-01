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
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int c = 0;
        int a = 0;
        for (int i = 0; i < n; i++)
        {

            if (arr[i] == '.')
            {
                c++;
                a++;
            }
            else
            {
                c = 0;
            }
            if (c >= 3)
                break;
        }

        if (c >= 3)
            cout << 2 << endl;
        else
            cout << a << endl;
    }

    // return with 0
    return 0;
}