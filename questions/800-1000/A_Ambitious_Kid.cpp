#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i]) < min)
            min = abs(a[i]);
    }
    cout << min << endl;

    // return with 0
    return 0;
}