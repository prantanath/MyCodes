#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    arr[0]=0,arr[1]=1;
    for(int i=2;i<=n;++i)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n]<<endl;
}

int main()
{
    fast;
    int t;
    solve();
}




