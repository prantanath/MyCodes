//Author:  Pranta
//Date:    2021-Sep-08
//Problem: B_Chess_Tournament
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
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
    string s;
    cin>>s;
    int cT=0;
    vector<int>ind;
    char mat[n][n];
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==j){
                mat[i][j]='X';
            }
            else{
                mat[i][j]='=';
            }
        }
    }
    for(int i=0;i<n;++i) {
        if(s[i]=='2'){
            ind.pb(i);
            cT++;
        }
    }

    if(cT==1 or (cT>1 && cT%2==0)){
        cout<<"NO"<<endl;
        return;
    }
    if(cT>0) ind.pb(ind[0]);
    if(cT>0){
    for(int i=0;i<ind.size()-1;++i){
        mat[i][i+1]='+';
    }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<mat[i][j];
        }
        cout<<endl;
    }
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
