#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE //if not defined
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // if defined

    string s, g;
    cin >> s >> g;
    string a = "";

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == g[i])
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
