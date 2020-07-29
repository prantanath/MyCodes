#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,m,ans;
    cin>>n>>m;
    int arr[n+5],brr[m+5];
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<m;++i) cin>>brr[i];
    bool ok=false;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(arr[i]==brr[j])
            {
                ans=brr[j];
                ok=true;
                break;
            }
        }
    }
    if(ok)
    {
        cout<<"YES"<<endl;
        cout<<1<<' '<<ans<<endl;
    }
    else cout<<"NO"<<endl;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}

