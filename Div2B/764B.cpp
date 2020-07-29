#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+5],moves=0,j;
    for(int i=1;i<=n;++i) cin>>arr[i];
//    while(moves<=n-moves-1)
//    {
//        j=moves;
//        while(j<n/2){
//        swap(arr[j],arr[n-1-j]);
//        j++;
//        }
//        moves++;
//    }
    for(int i=1;i<=n/2;++i)
    {
        if(i%2) swap(arr[i],arr[n-i+1]);
    }
    for(int i=1;i<=n;++i)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    fast;
    int t;
    solve();
}
