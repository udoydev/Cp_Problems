#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int n, p;
    cin >> n >> p;

    int f = (max(n, p));
    int s = (min(n, p));
    int ans = 0;

    for (int i = s; i <= f; i++)
    {
        for (int j = s; j <= f; j++)
        {
            int ans1 = i ^ j;
            ans = max(ans, ans1);
        }
    }

    cout << ans << endl;

    // return with 0
    return 0;
}