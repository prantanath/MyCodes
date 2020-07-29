#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,x,cnt=0,cnt1=0;
    cin>>n>>x;
    ll arr[n+5],p=0;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;++i)
    {
        int mn=arr[i];
        cnt1++;
        if(x<=mn*cnt1)
        {
            cnt++;
            cnt1=0;
        }
    }
        cout<<cnt<<endl;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}


