//Author:  Pranta
//Date:    2020-Aug-05
//Problem: B_Gifts_Fixing
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+5],brr[n+5];
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>brr[i];
    int mnCan=*min_element(arr,arr+n);
    int mnOrg=*min_element(brr,brr+n);
    ll totalMoves=0;
    //cout<<mnOrg<<' '<<mnCan<<endl;
    for(int i=0;i<n;++i){
        ll tmp1=arr[i]-mnCan;
        ll tmp2=brr[i]-mnOrg;
        totalMoves+=max(tmp1,tmp2);
    }
    cout<<totalMoves<<endl;

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}