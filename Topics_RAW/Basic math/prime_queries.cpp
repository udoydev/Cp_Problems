#include<bits/stdc++.h>
using namespace std;

#define N 1000000

void sieves(vector<int>&sieves)
{
	// sieve[0]=seive[1]=0;
	for(int i=2; i*i<N; i++)
	{
		if(sieves[i]==true)
		{
			for(int j=2*i; j<N;j+=i)
			{
				sieves[j]=false;
			}
		}
	}
}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

int p,q;
cin>>p>>q;
vector<int>sieve(N,1);
sieves(sieve);
	


for(int i=p;i<=q;i++)
{
	if(sieve[i])
	{
		cout<<i<<endl;
	}
}





	
}