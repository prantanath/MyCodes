#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll l,r;
    cin>>l>>r;
    if(2*l<=r)
    {
        cout<<l<<' '<<2*l<<endl;
    }
    else
        cout<<-1<<' '<<-1<<endl;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}


