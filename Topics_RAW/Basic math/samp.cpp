#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;

    int ans = 0;
int pow=1;
while(n>0)
{
    int ld=n&1;
    ans+=ld*pow;
    pow=10*pow;
    n=n>>1;

}
cout<<ans;

}

