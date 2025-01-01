#include <bits/stdc++.h>
using namespace std;
int const mod = 1000000007;
int main()
{
    // write your code here
    // int n;
    // cin >> n;

    int n;
    cin >> n;
    long long ans = 1;
    int i = 1;
    while (i <= n)
    {
        ans *= (2);
        ans %= mod;
        i++;
    }
    cout << ans << endl;
}