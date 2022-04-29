//Author:  Pranta
//Date:    2022-Apr-21
//Problem: F_Eating_Candies
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
    ll arr[n+5],ans=0;
    fr(i,0,n) cin>>arr[i];
    ll bb=0,al=0,i=0,cnt=2,l=n-1;
    while(1){
        if(i>l) break;
        if(al<=bb) {
            al+=arr[i];
            i++;
            if(al==bb) ans=((i)+(n-l-1));
            //cout<<al<<endl;
        }
        else if(i<=l) {
            bb+=arr[l];
            l--;
            if(al==bb) ans=((i)+(n-l-1));
            //cout<<i<<l<<endl;
        }
        //cout<<cnt<<endl;
    }
    //cout<<al<<bb<<endl;
    if(al==bb) ans=((i)+(n-l-1));
    cout<<ans<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}