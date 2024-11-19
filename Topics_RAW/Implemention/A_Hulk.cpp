#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n;
    cin >> n;
    if (n == 1)
        cout << " I hate it ";
    else
    {
        for (int i = 1; i <= n; i++)
        {

            if (i < n)
            {
                if (i % 2 == 0)
                {
                    cout << " I love that";
                }
                else
                {
                    cout << " I hate that";
                }
            }
            else
            {
                if (i % 2 == 0)
                    cout << " I love it ";
                else
                    cout << " I hate it ";
            }
        }
    }

    // return with 0
    return 0;
}