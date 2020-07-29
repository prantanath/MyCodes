#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    map<ll,ll>first,scd;
    for(ll i=0;i<4*n-1;++i)
    {
        ll x,y;
        cin>>x>>y;
        first[x]++;
        scd[y]++;

    }
    ll dif=0,X,Y;
    for(auto it=first.begin();it!=first.end();++it)
    {
        if(it->second%2) X=it->first;
    }
    for(auto it=scd.begin();it!=scd.end();++it)
    {
        if(it->second%2) Y=it->first;
    }

    cout<<X<<' '<<Y;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
