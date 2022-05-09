//Author:  Pranta
//Date:    2022-May-01
//Problem: Different_Subarrays_Rearrange
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define fr(i,a,n) for(int i=a;i<n;++i)
#define rfr(i,a,n) for(int i=n-1;i>=0;--i)
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define all(a) (a).begin(),(a).end()
#define pr(a) cout<<a<<endl 
#define sz(a) a.size();
#define ld long double
#define ll long long
#define pb push_back
const ld PI = 3.141592653589793238462;
const ll MOD = 1000000007;
const ll INF = 1e18;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+5],f=0;
    fr(i,0,n) {
        cin>>arr[i];
        ll x= arr[0];
        if(i>0){
            if(arr[i]==x) f++;
        }
    }
    if(n%2 || f==n-1) pr("NO");
    else{
        pr("YES");
        sort(arr,arr+n);
        fr(i,0,n) cout<<arr[i]<<" ";
        cout<<endl;
        fr(i,n/2,n) cout<<arr[i]<<" ";
        fr(i,0,n/2) cout<<arr[i]<<" ";
        
        cout<<endl;
    }
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}