#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,f="po",j="su",ch;
    int t,n;
    cin>>t;
    while(t--){
        cin>>s;
        n=s.length();
        if(s[n-2]=='p' && s[n-1]=='o')
            cout<<"FILIPINO"<<endl;
        else if(s[n-2]=='s' && s[n-1]=='u')
            cout<<"JAPANESE"<<endl;
        else
            cout<<"KOREAN"<<endl;
    }
}


