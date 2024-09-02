#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE //if not defined
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif // if defined

	
long long t;
cin>>t;
while(t--)
{
	int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}

//logic

int prev=0;
int ans=0;

for(int i=0;i<n;i++)
{
	ans=max(ans,a[i]-prev);
	prev=a[i];

}

ans=max(ans,2*(x-prev));
cout<<ans<<endl;



}






	
}