#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll z=(n%1000);
    if(z) cout<<1000-z;
    else cout<<z;
}

int main()
{
    fast;
    int t;
    solve();
}
