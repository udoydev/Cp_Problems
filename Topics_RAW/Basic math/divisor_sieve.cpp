#include<bits/stdc++.h> // Include all standard libraries
using namespace std;

const int N = 1e5+10; // Define a constant for the size of the divisors array

vector<int> divis[N]; // Create an array of vectors to store divisors for each number

// Function to calculate divisors for each number from 2 to N-1
void divi ()
{
    // Loop over potential divisors starting from 2
    for(int i=2; i*i<N; i++)
    {
        // Loop through multiples of the current divisor
        for(int j=i; j<N; j+=i)
        {
            // Store the divisor i for each multiple j
            divis[j].push_back(i);
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE // Check if the program is not running on an online judge
    // Redirect input from "input.txt" and output to "output.txt" for local testing
    freopen("input.txt","r",stdin);  
    freopen("output.txt","w",stdout); 
    #endif // end of ONLINE_JUDGE check

    divi(); // Call the function to calculate divisors
    
    int n; // Variable to hold user input
    cin >> n; // Take user input for the range

    // Print the divisor array for each number from 1 to n-1
    for(int i=1; i<n; i++)
    {
        // Loop through the divisors of each number
        for(auto divi : divis[i]) 
        {
            cout << divi << " "; // Print each divisor
        }
        cout << endl; // Print a newline after each number's divisors
    }
    
    return 0; // Exit the program
}
 