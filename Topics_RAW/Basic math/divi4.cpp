/*

                     بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ


*/





#include<bits/stdc++.h>
using namespace std;

//All the define functions
#define bug(...)	__f(#__VA_ARGS__,__VA_ARGS__)


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

// main solve function
void solve()
{
	int x;
    cin >> x;
    int c = 0;
    for (int i = 1; i * i <= x; i++)
    {
        if (x % i == 0) {
            c++; // Count the divisor i
            if (i != x / i) {
                c++; // Count the corresponding divisor x/i if it's different
            }
        }
    }

    cout << c << endl;

// bug();

}





// int main part of the code
int main()
{
	



// calling the void solve function for t testcases
int t;
cin>>t;
// cin>>t;
while(t--) solve();

	
}