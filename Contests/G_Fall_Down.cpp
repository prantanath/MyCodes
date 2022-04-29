//Author:  Pranta
//Date:    2022-Apr-22
//Problem: G_Fall_Down
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define fr(i,a,n) for(int i=a;i<n;++i)
#define rfr(i,a,n) for(int i=n-1;i>=a;--i)
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
    int n,m;
    cin>>n>>m;
    char grid[n+1][m+1];
    fr(i,0,n){
        fr(j,0,m){
            cin>>grid[i][j];
        }
    }
    fr(j,0,m){
        rfr(i,0,n){
            if(grid[i][j]=='.'){
                rfr(k,0,i){
                    if(grid[k][j]=='*'){
                        swap(grid[i][j],grid[k][j]);
                    }
                    if(grid[k][j]=='o') break;
                }
            }
                
            }
        
    }
    fr(i,0,n){
        fr(j,0,m){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}