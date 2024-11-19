#include <bits/stdc++.h>
using namespace std;
void solution(int a[], int n, int k)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            c++;
    }
    string ans = (c > 0) ? "YES" : "NO";
    cout << ans << endl;
}
int main()
{
    // write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int k;
        cin >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        solution(a, n, k);
    }

    // return with 0
    return 0;
}