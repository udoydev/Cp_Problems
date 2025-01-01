#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here
    int t;
    cin >> t;
    // 10101010
    while (t--)
    {

        int n;
        cin >> n;
        unsigned int rev = 0;
        for (int i = 0; i < 32; i++) // 32 iterations for 32 bits
        {
            rev <<= 1;        // Left shift rev by 1
            if ((n & 1) == 1) // Check LSB is 1 or not
                rev ^= 1;     // Set LSB of rev by x or it with 1
            n >>= 1;          // Right shift n by 1 for the next value check
        }

        cout << rev << " ";
    }

    // return with 0
    return 0;
}