#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,k,x=1,mn=0,mx=0;
    cin>>n>>k;
    ll arr[n+5];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        mn=min(mn,arr[i]);
        mx=max(mx,arr[i]);
    }
//    while(mn%k!=0)
//    {
//        mn+=x;
//        x++;
//    }
    mn=k-mn;
    mx+=mn;
    while(mx%k!=0)
    {

    }

}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}



