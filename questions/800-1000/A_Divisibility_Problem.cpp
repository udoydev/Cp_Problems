#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        // Calculate the smallest number to add to 'a' to make it divisible by 'b'
        long long remainder = a % b;
        long long c = (b - remainder) % b;

        cout << c << endl;
    }
    return 0;
}
