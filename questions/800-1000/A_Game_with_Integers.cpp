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

        if (n % 3 == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }

    // return with 0
    return 0;
}