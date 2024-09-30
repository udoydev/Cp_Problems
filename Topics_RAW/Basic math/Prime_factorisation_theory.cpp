#include<bits/stdc++.h>
using namespace std;

//o(n) code
void prime_factorization1(int n)
{
	// running loop from 2 as 1 and 0 is not prime
	for(int i=2;i*i<=n ;i++)// run the loop till sqrt of n if 12 is divisible by 2 than it is divisible by 4 also so sqrt(4)=2
	{
		if(n%i==0)//if n is divisible by i than
		{
			int c=0; // take a count
			while(n%i==0) // run a loop untill n is divisible by 2
			{
				n/=i; // divide the n by i every time so that the code run
				c++; // increase the counter and it will store how many times the ith element will divide the n 
			}

			cout<<i<<"^"<<c<<", ";
			// finally print the i th elements and its count after the loops end 
		}


	}

	if(n!=1)cout<<n<<"^"<<1;


}

// for 36 = 2*2*3*3

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	int n;
	cin>>n;

	prime_factorization1(n);








	
}