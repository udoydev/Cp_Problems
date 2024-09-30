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

for(int i=2;i*i<n ;i++)
{
	if(n%i==0)
	{
		cout<<"not a prime number"<<endl;
		break;
	}
	
}
cout<<"prime number"<<endl;
}



	
