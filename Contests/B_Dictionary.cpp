//Author:  Pranta
//Date:    2022-May-02
//Problem: B_Dictionary
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
map<string,int>mp;
char a= 'a',b;
void count()
{
    ll inc=1;
    fr(i,0,26){
        b='a';
        fr(i,0,26){
            string s="";
            s+=a;
            s+=b;
            if(a!=b){
            mp[s]=inc;
            inc++;
            }
            b++;
        }
        a++;
    }
}
void solve()
{
    
    string f;
    cin>>f;
    // ll ans= (f[0]-'a')*25+(f[1]-'a')+1;
    // if(f[0]<f[1]) ans--;
    cout<<mp[f]<<endl;
}
int main()
{
    fast;
    count();
    int t;
    cin>>t;
    while(t--)
    solve();
}