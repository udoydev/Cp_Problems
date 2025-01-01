#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

int main()
{
    // write your code here
    long long n;
    cin >> n;
    long long ans = int(pow(2, n)) % MOD;
    cout << ans << endl;
    // return with 0
    return 0;
}