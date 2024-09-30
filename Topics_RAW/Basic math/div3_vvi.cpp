/*

                     بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ


*/

#include <bits/stdc++.h>
using namespace std;

// All the define functions
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

// main solve function
void solve()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> divisors;
    for (long long i = 1; i * i <= n; i++)
    { // TLE TRICk
        if (n % i == 0)
        {
            divisors.push_back(i); // i is a divisor
            if (i != n / i)
            {
                divisors.push_back(n / i); // n / i is also a divisor
            }
        }
    }

    sort(divisors.begin(), divisors.end()); // Sort the divisors

    if (divisors.size() < k)
    {
        cout << -1 << endl; // Not enough divisors
    }
    else
    {
        cout << divisors[k - 1] << endl; // Output the k-th divisor (1-based index)
    }
}

// int main part of the code
int main()
{
#ifndef ONLINE_JUDGE // if not defined
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // if defined

    // calling the void solve function for t testcases
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
}