
/*
link :

rating :

difficult :

*/

#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] % a[j] != 0)
            {
                v2.push_back(a[i]);
            }
            else
            {
                v1.push_back(a[i]);
            }
        }
    }
    cout << v1.size() << " " << v2.size() << endl;
    for (auto &i : v1)
    {
        cout << i << " ";
    }
    for (auto &i : v2)
    {
        cout << i << " ";
    }
}

int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }

    // return with 0
    return 0;
}