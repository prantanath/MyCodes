#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    if(n%4)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
