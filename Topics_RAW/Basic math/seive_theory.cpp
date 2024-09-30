#include<bits/stdc++.h>
using namespace std;

//taking N as highest 
#define N 1000000

//function of sieve 
void prime_seive(vector<int>&seive)
{
	//declaraing 0 and 1 as non prime
	seive[0]=seive[1]=0;
	//running a loop till 2 to less than N
	for(int i=2;i<N;i++)
	{
		//declaring i as prime
		if(seive[i]==true)
		{
			//declaring the multiples of i as false or 0
			for(int j=2*i;j<N;j+=i)
			{
				seive[j]=false;// making the all the multiple of i as non prime
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

// declaring N size of vector filling with 1
vector<int>seive(N,1);
int p;
cin>>p;
//calling the function

prime_seive(seive);
for(int i=0;i<=p;i++)
{

	if(seive[i])
	{
		cout<<i<<" "<<seive[i]<<endl;//if seive[i]==true than print the element
		
	}
}




	
}