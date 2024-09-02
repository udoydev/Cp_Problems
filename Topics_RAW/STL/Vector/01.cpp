//https://vjudge.net/problem/Aizu-ITP2_1_A
#include<bits/stdc++.h>
using namespace std;

void solution()
{
	

	int q;
	cin>>q;
	vector<int>v;

	while(q--)
	{
		int aq;
		cin>>aq;

		if(aq==0)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		else if(aq==1)
		{
			int p;
			cin>>p;
			cout<<v[p]<<endl;
		}
		else if(aq==2)
		{
			v.pop_back();
		}
	}
}

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	




solution();


	
}

