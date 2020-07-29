#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        if(i) arr[i]+=arr[i-1];
    }
    int mn=arr[k-1],pos=1;
    for(int i=k;i<n;++i)
    {
        if(arr[i]-arr[i-k]<mn){
        mn=min(mn,arr[i]-arr[i-k]);
//        cout<<mn<<endl;
        pos=i-k+2;}

    }
    cout<<pos<<endl;
}

int main()
{
    fast;
    int t;
    solve();
}

