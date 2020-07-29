#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,pos=0,neg=0;
    cin>>n;
    ll arr[n+5];
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; ++i)
    {
        if(i%2) arr[i]=-abs(arr[i]) ;
        else arr[i]=abs(arr[i]);
        cout<<arr[i]<< ' ';
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
