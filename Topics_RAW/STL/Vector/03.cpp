//https://vjudge.net/problem/HackerRank-vector-erase
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

int n;
cin>>n;
vector<int>v;

for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
	v.push_back(x);

}


int p;
cin>>p;

int s,e;
cin>>s>>e;
v.erase(v.begin()+(p-1));

v.erase(v.begin()+(s-1),v.begin()+(e-1));

cout<<v.size()<<endl;
for (int i=1; i<=v.size(); i++)
{
	cout<<v[i-1]<<" ";

}


	
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
// 	#ifndef ONLINE_JUDGE //if not defined
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// 	#endif // if defined
//     int n;
//     cin >> n;
//     vector<int> v(n);
    
//     // Reading the vector elements
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     // Reading the position to erase
//     int p;
//     cin >> p;
//     v.erase(v.begin() + (p - 1)); // Convert 1-based index to 0-based

//     // Reading the range to erase
//     int s, e;
//     cin >> s >> e;
//     v.erase(v.begin() + (s - 1), v.begin() + (e - 1)); // Convert 1-based to 0-based

//     // Print the size of the vector
//     cout << v.size() << endl;

//     // Print the remaining elements in the vector
//     for (int i = 0; i < v.size(); i++) {
//         cout << v[i] << " ";
//     }
    
//     return 0;
// }
