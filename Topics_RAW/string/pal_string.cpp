#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    string s;
    cin >> s;
    string rev;
    int p = 0;
    for (int i = 0; i < (s.size() / 2); i++)
    {
        if (!(s[i] == s[(s.size()) - i - 1]))
        {
            p = -1;
            break;
        }
    }

    if (p < 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    // return with 0
    return 0;
}