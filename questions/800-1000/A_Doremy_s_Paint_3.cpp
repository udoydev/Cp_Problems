/*

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
        map<int, int> mp; // map for store the frequency
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++; // storing count
        }

        // 5 9 5 9

        // now condition
        if (mp.size() >= 3)
        {
            cout << "No" << endl;
        }
        else
        {
            if (abs(mp.begin()->second - mp.rbegin()->second) <= 1) // syntax to access the elements in map
            {
                cout << abs(mp.begin()->second - mp.rbegin()->second) << endl;

                cout << "Yes" << endl;
            }
            else
            {
                

                cout << "No" << endl;
            }
        }
    }
    // return with 0
    return 0;
}