#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        string s;
        cin >> s; // Input string
        int q;
        cin >> q; // Number of queries

        while (q--)
        {
            int i, v;
            cin >> i >> v; // Read the query

            // Update the string
            s[i - 1] = '0' + v; // Convert integer to char '0' or '1'

            // Check for substring "1100"
            bool found = false;
            // We only need to check around the updated index
            for (int j = max(0, i - 4); j <= min((int)s.length() - 4, i - 1); ++j)
            {
                if (s.substr(j, 4) == "1100")
                {
                    found = true;
                    break;
                }
            }
            // Output result
            if (found)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
