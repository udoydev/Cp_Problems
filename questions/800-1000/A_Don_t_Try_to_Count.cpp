
/*

https://codeforces.com/problemset/problem/1881/A
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string x, y;
        cin >> x >> y;

        int ans = -1;
        for (int i = 0; i < 6; i++)
        {
            if (x.find(y) != string::npos) // npos --- what does it mean
            {
                ans = i;
                break;
            }
            x.append(x); // Double the string
        }

        // After the loop, check if ans was updated
        cout << ans << endl;
    }

    return 0;
}
