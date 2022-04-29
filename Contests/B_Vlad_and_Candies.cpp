//Author:  Pranta
//Date:    2022-Mar-31
//Problem: B_Vlad_and_Candies
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
    int n;
    cin>>n;
    int a[n+5];
    fr(i,0,n) cin>>a[i];
    if(n==1 && a[0]>1){
        cout<<"NO"<<endl;
        return;
    }
    sort(a,a+n);
    reverse(a,a+n);
    if(a[0]-a[1]>1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}