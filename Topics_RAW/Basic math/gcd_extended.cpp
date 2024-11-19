#include<bits/stdc++.h>
using namespace std;

// take a vecor function that will return a arr of the ans of x,y
vector<int> extended_gcd(int a , int b)
{
	if(b==0)
	{
		return {1,0};
	}
	vector<int>result=extended_gcd(b,a%b);//calling the gcd function for recursive approach
	// now take a 2 varibale to store the x ,  y
	int sx=result[0];
	int sy=result[1];

	int x=sy;//as dividant becomes the divisor
	int y=sx -((a/b)*sy); 

	return {x,y};
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
cout<<res[0]<<" "<<res[1]<<endl;

// 6 40 
//7  -1
//42 - 40
//gcd: 2 (ans)


	
}