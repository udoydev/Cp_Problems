#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s, g;
    cin >> s >> g;
    string a = "";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == g[i])
        {
            a += '0';
        }
        else
        {
            a += '1';
        }
    }

    cout << a << endl;

    return 0;
}
