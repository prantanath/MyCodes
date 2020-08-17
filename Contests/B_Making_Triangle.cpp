//Author:  Pranta
//Date:    2020-Aug-15
//Problem: B_Making_Triangle
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,cnt=0;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            for(int k=j+1;k<n;++k){
                if(v[i]+v[j]>v[k]&& v[i]!=v[j] && v[j]!=v[k])
                cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
}
int main()
{
    fast;
    int t;
    solve();
}