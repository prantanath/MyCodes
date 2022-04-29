//Author:  Pranta
//Date:    2022-Apr-09
//Problem: A_Array_Balancing
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
    vector<int> v;
    ll a[n+5],b[n+5],s=0;
    fr(i,0,n) {
        cin>>a[i];
        //v.push_back(a[i]);
    }
    
    fr(i,0,n) {
        cin>>b[i];
        //v.push_back(b[i]);
        //cout<<b[i]<<endl;
    }
    ll t1=a[0],t2=b[0];
    //cout<<<<endl;
    fr(i,1,n){
        int x =abs(a[i]-t1)+abs(b[i]-t2);
        int y =abs(b[i]-t1)+abs(a[i]-t2);
        if(x>y){
            s+=y;
            t1=b[i],t2=a[i];
        }
        else{
            s+=x;
            t1=a[i],t2=b[i];
        }
        //s+=abs(b[i]-b[i+1]);
        //cout<<s<<endl;
    }
    cout<<s<<endl;
    
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}