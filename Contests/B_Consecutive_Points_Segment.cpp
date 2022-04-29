//Author:  Pranta
//Date:    2022-Apr-22
//Problem: B_Consecutive_Points_Segment
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
    ll arr[n+1],tw=0,th=0;
    bool f=false,b=false;
    fr(i,0,n) cin>>arr[i];
    fr(i,0,n-1){
        if(tw>2|| tw==2 and th>0){
            pr("NO");return;
        }
        if(th>1|| tw>0 and th==1){
            pr("NO");return;
        }
        if(arr[i+1]-arr[i]==2){
            tw++;
        }
        if(arr[i+1]-arr[i]==3){
            th++;
        }
        if(arr[i+1]-arr[i]>3){
            pr("NO");return;
        }
    }
    if(tw>2|| tw==2 and th>0){
            pr("NO");return;
        }
        if(th>1|| tw>0 and th==1){
            pr("NO");return;
        }
    pr("YES");
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}