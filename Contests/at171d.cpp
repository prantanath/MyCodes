#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n,q,sum=0;
    cin>>n;
    ll arr[n+5];
    map<ll,ll>mp;
    for(int i=1; i<=n; ++i)
    {
        cin>>arr[i];
        mp[arr[i]]++;
        sum+=arr[i];
    }
//    cout<<sum<<endl;
    cin>>q;
    while(q--)
    {
        ll b1,c1;
        cin>>b1>>c1;
        mp[c1]+=mp[b1];
        ll extra=mp[b1]*(c1-b1);
        mp[b1]=0;
        sum+=extra;
        cout<<sum<<endl;

    }


}

int main()
{
    int x,t;
    solve();

}



