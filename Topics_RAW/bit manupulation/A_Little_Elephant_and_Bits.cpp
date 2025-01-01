
/*
link : 

rating : 

difficult : 

*/

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    //write your code here
    string s;
    cin>>s;

    int rm=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0') // if any 0 found set the rm indicator to 1
        {
            rm=1; 
            s.erase(i,1); // remove the zero
            break;// than break out of the code
        }
    }  
    if(!rm) // if not found
    {
    s.erase(s.begin());// simply remove the first character
    } 

    cout<<s<<endl;// Print output
    //return with 0 
    return 0;
}