#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    string s;
    bool flag=true;
    cin>>s;
    for(int i=0;i<s.length();++i){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
            i+=2;
        else if(s[i]=='1' && s[i+1]=='4')
            i+=1;
        else if(s[i]=='1')
            i=i;
        else
            flag=false;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}
