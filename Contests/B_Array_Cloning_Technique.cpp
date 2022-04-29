//Author:  Pranta
//Date:    2022-Apr-08
//Problem: B_Array_Cloning_Technique
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
    map<int,int>mp;
    for(int i=0;i<n;++i) 
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int mx=0;
    fr(i,0,n){
        
        if(mp[a[i]]>mx) mx=mp[a[i]];
    }
    //cout<<mx<<endl;
    if(mx==n) {cout<<0<<endl; return;}

    int rem=n-mx,cnt=rem+1;
    rem-=mx;
    //cnt+=mx;
    while(1){
        if(rem<=0) break;
        mx*=2;
        rem-=mx;
        cnt++;
    }
    cout<<cnt<<endl;

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}