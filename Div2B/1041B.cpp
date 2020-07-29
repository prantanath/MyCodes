#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
ll ratioo(ll x, ll y,ll *r1, ll *r2)
{
    ll d;
    d = __gcd(x,y);

    *r1 = x / d;
    *r2 = y / d;


}
void solve()
{
    ll a,b,x,y,tv=0,w=1,h=1,r1,r2;
    cin>>a>>b>>x>>y;
    ratioo(x,y,&r1,&r2);
//    cout<<r1<<r2;
    tv=min(a/r1,b/r2);
    cout<<tv;
}

int main()
{
    fast;
    int t;
    solve();
}

