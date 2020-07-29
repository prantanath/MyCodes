#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll  n,sum=0;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        if(i) sum+=abs(arr[i]-arr[i-1]);
    }
    cout<<sum-(n-1)<<endl;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
