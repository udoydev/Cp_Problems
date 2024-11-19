/*

https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/
*/

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int aa, b;
        cin >> aa >> b;
        int x;
        cin >> x;

        int a[x][2];
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
        int s = 0;
        int s1 = 0;
        int ss = 0;
        int ss1 = 0;

        for (int i = 0; i < x; i++)
        {

            if (a[i][0] == 1)
                s += aa;
            if (a[i][1] == 1)
                s1 += b;
        }

        for (int i = 0; i < x; i++)
        {

            if (a[i][0] == 1)
                ss += b;
            if (a[i][1] == 1)
                ss1 += aa;
        }

        int ans1 = s1 + s;
        int ans2 = ss1 + ss;

        cout << min(ans1, ans2) << endl;
    }
}