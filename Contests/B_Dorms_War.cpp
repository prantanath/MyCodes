//Author:  Pranta
//Date:    2022-May-06
//Problem: B_Dorms_War
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
    ll n,m,pos=0,ans=0;
    cin>>n;
    string s;
    cin>>s;
    cin>>m;
    char ar[m+1];
    map<char,int>ck;
    fr(i,0,m){
        cin>>ar[i];
        ck[ar[i]]=1;
    }
    rfr(i,0,n){
        if(ck[s[i]]){
            pos=i;
            break;
        }
    }
    ll cur=0;
    //joobeel
    //0123456
    //1-1-2-1
    fr(i,0,pos+1){
        if(ck[s[i]]){
            ll t= i-cur;
            // pr(t);
            ans=max(ans,t);
            cur=i;
        }
        
    }
    pr(ans);

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}