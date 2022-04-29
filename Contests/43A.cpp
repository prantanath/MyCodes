#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,mx=0;
    string s;
    map<string,int>mp;
    map<string,int>::iterator it;
    cin>>n;
    while(n--){
        cin>>s;
        mp[s]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        mx=max(it->second ,mx);
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(mx==it->second)
        {
            cout<<it->first;
        }
    }
   // cout<<mx;
}
