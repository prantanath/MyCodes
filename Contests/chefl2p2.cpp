#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,q,t,c;
    string s;
    cin>>t;
    map<char,ll>mp;
    map<char,ll> :: iterator it;
    while(t--)
    {
        cin>>n>>q>>s;
        for(ll i=0;i<n;i++){
                mp[s[i]]++;
            }
        while(q--)
        {
            ll pend=0;
            cin>>c;
            for(it=mp.begin();it!=mp.end();it++)
            {
            if(it->second-c>0){
                pend+=(it->second-c);
            }
            }
            cout<<pend<<endl;
        }
        mp.clear();
    }
    return 0;
}
