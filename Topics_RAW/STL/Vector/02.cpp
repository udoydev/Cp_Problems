//https://vjudge.net/problem/HackerRank-vector-sort
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

sort(v.begin(),v.end());

for(auto &i:v)
{
	cout<<i<<" ";
}





	
}