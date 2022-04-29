#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,x;
    cin>>n>>x;
    int arr[n+5],presum[n+5],modl[n+5];
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    int last=0,z=0,ans=0;
    for(int i=1;i<=n;++i){
            last=i+1;
            z+=arr[i];
        while(last<n){
            z+=arr[last];
            if(z%3!=0) ans=max(last-i,ans);
        }
    }



}

int main()
{
    int t;
    cin>>t;
    while(t--){
            if((10%2))
        cout<<"bal";
        solve();
    }
}

