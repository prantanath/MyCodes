#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
int maxdivisor(int n)
{
    int boro=1;
    for(int i=2;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            boro=max(boro,i);
            boro=max(boro,n/i);
        }
    }
    return boro;
}
void solve()
{
    ll n,x,y;
    cin>>n;
    if(!(n%2)) cout<<n/2<<' '<<n/2;
    else
    {
        cout<<maxdivisor(n)<<' '<<n-maxdivisor(n);
    }
    cout<<"\n";

}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}


