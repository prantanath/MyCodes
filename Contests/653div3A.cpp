#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll x,y,n;
    cin>>x>>y>>n;
    ll z=(n-y)/x;
    ll ans = (z*x)+y;
    cout<<ans<<endl;

}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
