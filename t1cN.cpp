#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;

    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll> mp;
        ll a[n],mx=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]>mx){
                mx=mp[a[i]];
            }
        }
        ll dnt=mp.size();
      // cout<<mx<<dnt;
       // int diff =cnt;;
        ll same=mx;
        ll diff=dnt;ll ans;
        if(same-1>=diff)
            ans=min(same-1,diff);
        else
            ans=min(same,diff-1);
        cout<<ans<<endl;
    }
}
