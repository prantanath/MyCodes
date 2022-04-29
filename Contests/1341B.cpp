#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n+5],check[n+5],z;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        check[i]=0;
    }
     for(int i=1;i<n-1;++i){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            check[i]=1;
        }
    }
    for(int i=1;i<n;++i){
        //cout<<v[i]<<" ";
        //z+=v[i];
        check[i]+=check[i-1];
    }
    /*for(int i=0;i<n;++i){
        cout<<check[i]<<" ";
    }*/
    ll ans=1,L=1,x=0,j;
    for(int i=k-1,j=0;i<n;++i,++j){
           // cout<<j<<endl;
        x=(check[i-1]-check[j])+1;
        if(x>ans){
        //cout<<j<<endl;
        ans=x;
        L=j+1;
        }
    }
    cout<<ans<<" "<<L<<endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
