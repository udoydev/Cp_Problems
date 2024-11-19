#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)return a;
	else return gcd(b,a%b);//dividant becomes divisor
}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	
int x,y;
cin>>x>>y;
int ans = gcd(x,y);
cout<<ans;





	
}