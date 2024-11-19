#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n, i;
    cin >> n >> i;

    int ans = (n >> i) & 1;

    if (ans > 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    // return with 0
    return 0;
}