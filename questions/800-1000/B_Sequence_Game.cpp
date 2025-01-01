/* revisit
https://codeforces.com/problemset/problem/1862/B
*/

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
        vector<int> arr(n), res;

        // Reading input array, starting from index 0
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // Initialize the result vector with the first element
        res.push_back(arr[0]);

        // Process the array and fill the result
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                res.push_back(arr[i]);
                res.push_back(arr[i]); // Duplicate the element
            }
            else
            {
                res.push_back(arr[i]);
            }
        }

        // Print the result vector
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++)
        {

            cout << res[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// revisit