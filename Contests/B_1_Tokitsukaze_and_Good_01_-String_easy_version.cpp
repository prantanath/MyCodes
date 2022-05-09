//Author:  Pranta
//Date:    2022-May-08
//Problem: B_1_Tokitsukaze_and_Good_01_-String_easy_version
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
    int n,z=0,o=0;
    cin>>n;
    string s;cin>>s;
    vector<int>v;
    for(int i=0;i<n;++i){
        if(s[i]=='0') z++;
        else o++;

    }
    
    // 3 3 3
    // 1 2 2 1
    // 1110011000
    // 1100110000 
    // 1110001110
    //1 1 1 1 1 0 0 0 1 1 1 1 0 0 0 
    // 3 3 3
    int pos1=0,pos2=0,ev=0;
    for(int i=0;i<n-1;++i){
        if(s[i]!=s[i+1]){
            
            v.pb(i+1-pos1);
            pos1=i+1;
        } 

    }
    v.pb(n-pos1);
    pos1=0;
    for(int i=0;i<v.size();++i){
        if(v[i]%2==0){
            ev++;
        }
        
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i]%2){
            pos1++;
            v[i+1]--;
        }
        
    }
    // for(int i=n-1;i>pos1+1;--i){
    //     if(s[i]!=s[i-1]) {
    //         pos2=i;
    //     }

    // }
    
    cout<<(ev==v.size()? 0:(pos1>pos2?pos1:pos2))<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}