
/*
link : https://vjudge.net/problem/UVA-12455

rating : 1200

difficult : medium

*/

#include <iostream>
#include <vector>
using namespace std;

void recursiveSolution()
{
    int testCases;
    cin >> testCases;
    for (int t = 0; t < testCases; t++)
    {
       int target, length;
        cin >> target >> length;
        vector<int> arr(length);
        for (int i = 0; i < length; i++)
            cin >> arr[i];
 bool found = false;
 // Total number of subsets = 2^length
        int totalSubsets = 1 << length;
        for (int mask = 0; mask < totalSubsets; mask++)
        {
            int subsetSum = 0;
            // Generate subset based on the bits in `mask`
            for (int j = 0; j < length; j++)
            {
                if (mask & (1 << j))
                { // If j-th bit in `mask` is set
                    subsetSum += arr[j];
                }
            }
            if (subsetSum == target)
            {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
}

int main()
{
    recursiveSolution();
    return 0;
}
