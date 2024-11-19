#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n, p;
    cin >> n >> p;

    int ad = 0;
    int orr = 0;
    int xxr = 0;

    for (int i = 1; i < n; i++)
    {
        // Calculate AND, OR, XOR for i and i + 1
        int andVal = i & (i + 1);
        int orVal = i | (i + 1);
        int xorVal = i ^ (i + 1);

        // Update max values for each operation if greater
        if (andVal > ad && andVal < p)
            ad = andVal;
        if (orVal > orr && orVal < p)
            orr = orVal;
        if (xorVal > xxr && xorVal < p)
            xxr = xorVal;
    }

    if (ad < p)
    {
        cout << ad << endl;
        // cout<<orr<<endl;
        // cout<<xxr<<endl;
    }
    else
    {
        cout << 0 << endl;
    }

    if (orr < p)
    {
        cout << orr << endl;
        // cout<<orr<<endl;
        // cout<<xxr<<endl;
    }
    else
    {
        cout << 0 << endl;
    }
    if (xxr < p)
    {
        cout << xxr << endl;
        // cout<<orr<<endl;
        // cout<<xxr<<endl;
    }
    else
    {
        cout << 0 << endl;
    }
    // return with 0
    return 0;
}