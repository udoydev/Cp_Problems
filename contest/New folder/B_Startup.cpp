#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int n, k;
        cin >> n >> k; // Number of shelves and number of bottles

        unordered_map<int, vector<int>> brand_costs; // Map to group costs by brand
        int b, c;

        for (int i = 0; i < k; i++)
        {
            cin >> b >> c;               // Input brand and cost
            brand_costs[b].push_back(c); // Group costs by brand
        }

        // Now calculate the maximum profit
        int total_profit = 0;

        // Iterate over each brand's costs
        for (auto &pair : brand_costs)
        {
            vector<int> &costs = pair.second;
            sort(costs.rbegin(), costs.rend()); // Sort costs in descending order

            // We can use up to 'n' shelves, so take the top 'n' costs if available
            for (int i = 0; i < min(n, (int)costs.size()); i++)
            {
                total_profit += costs[i]; // Add the highest costs to total profit
            }
        }

        cout << total_profit << endl; // Output the maximum profit for this test case
    }

    return 0;
}
