#include <iostream>
using namespace std;

void swapAdjacentBits(int T)
{
    const int ODD_MASK = 0xAAAAAAAA;  // Binary: 101010...
    const int EVEN_MASK = 0x55555555; // Binary: 010101...

    while (T--)
    {
        int N;
        cin >> N;

        int oddBits = (N & ODD_MASK) >> 1;   // Right-shift odd bits
        int evenBits = (N & EVEN_MASK) << 1; // Left-shift even bits

        int result = oddBits | evenBits; // Combine shifted bits

        cout << result << " ";
    }
}

int main()
{

    int T;
    cin >> T;

    swapAdjacentBits(T);
    return 0;
}

// for 7

/*
N = 7
Binary: 0000000111
Odd bits: 0111 & 1010101010 = 0010 → >> 1 → 0001.
Even bits: 0111 & 0101010101 = 0101 → << 1 → 1010.

than result = odd | even
Result: 1011 (Decimal: 11).

*/