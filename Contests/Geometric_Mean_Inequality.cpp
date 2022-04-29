//Author:  Pranta
//Date:    2022-Apr-25
//Problem: Geometric_Mean_Inequality
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
    ll arr[n+1],min1=0,pos1=0;
    fr(i,0,n) {
        cin>>arr[i];
        if(arr[i]==-1) min1++;
        else pos1++;
    }
    
    if(n%2){
        
        if(abs(min1-pos1)!=1){
            pr("No");return;
        } 
    }
    else{

        if(abs(min1-pos1)!=2 ){
            if(min1!=pos1){
            pr("No");return;
            }
        } 
        else{
            if(min1%2){
                pr("No");return;
            }
        }
    }
    pr("Yes");

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}