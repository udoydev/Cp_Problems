#include<bits/stdc++.h>
using namespace std;

#define n 10000000
vector<int>sieve(n,1);
vector<int>lp(n,0);
vector<int>hp(n,0);

// finding the highest and lowest prime using sieve
void sieves(vector<int>&sieve)
{
	for(int i=2;i*i<n;i++)
	{
		if(sieve[i]==true)//mark all the i as true
		{
			lp[i]=hp[i]=i; // for 2 its highest and lowest prime is 2 
			for(int j=2*i;j<n;j+=i)
			{
				sieve[j]=false; // mark all the multiples of i as false
				hp[j]=i; // as the last i which will run will be the highest prime of any num

				if(lp[j]==0)
				{
					lp[j]=i; //as we will mark all the multiples of i =0 so the first i for which the j will be zero will be the lowest prime
				}
			}
		}
	}


}

void low_high_prime()//to print the high and low prime
{
	sieves(sieve);
	for(int i=0; i<=100 ;i++)
	{
		cout<<lp[i]<<" "<<hp[i]<<endl;
	}
}

void prime_factors(int p)//finding primes factors of any numbers using sieve
{
	sieves(sieve);//calling the sieve function
	vector<int>prime_f;//declare a vector for storing the primes

	/*
	for 36; hp=3
	36%hp==0-->36/3=12;
	12%3==0-->12/3=4;
	4%2==0-->4/2=2;
	2%2==0-->2/2=1;

	so the ans 2,3

	*/
	
	while(p>1)
	{
	
		int prime_num=hp[p];
		int c=0;
		while(p%prime_num==0)
		{
			p/=prime_num;
			c++;
			
		}
		cout<<c<<" ,";
		prime_f.push_back(prime_num);
	}
cout<<endl;


	for(auto &i : prime_f)
	{
		cout<<i<<" "<<",";
	}
}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	
// low_high_prime();

	int p;
	cin>>p;
	prime_factors(p);





	
}