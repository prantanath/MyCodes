//Author:  Pranta
//Date:    2021-Jul-25
//Problem: B_Running_for_Gold
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF (int)1e9
#define ll long long
#define pb push_back
using namespace std;
void solve()
{
    int n,x;
    cin>>n;
    vector<vector<int>> v(n+1);
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>x;
            v[i].pb(x);
        }
    }
    int c=0;
    int sup[n],pos=-1,mx=-1;
    mem(sup,0);
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            c=0;
            for(int k=0;k<5;++k){
                if(v[i][k]<v[j][k]) c++;
            }
            if(c>2) {
                sup[i]+=1;
            }
        }
    }
    for(int i=0;i<n;++i){
        if(sup[i]>mx){
            mx=sup[i];
            pos=i+1;
        }
    }
    cout<<pos<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
