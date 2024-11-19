#include<bits/stdc++.h>
using namespace std;

int _gcd(int a , int b)
{
	if(b==0)return a ;
	else return (b,a%b);
}

vector<int>extended_gcd(int a, int b )
{
	//we know if b=0 than x=1,y=0,gcd=a
	if(b==0)
	{
		return {1,0,a};
	}
	vector<int>result=extended_gcd(b,a%b);
	int sx=result[0];
	int sy=result[1];
	int gcd=result[2];

	int x=sy;
	int y=sx-((a/b)*sy);

	return {x,y,gcd};
}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined


	int a,b;
	cin>>a>>b;

	vector<int>res=extended_gcd(a,b);
	cout<<"x "<<res[0]<<" y "<<res[1]<<" gcd :"<<res[2]<<endl;
	int ans=_gcd(a,b) ;
	cout<<"normal euclid gcd : "<<ans<<endl;

}