//Author:  Pranta
//Date:    2020-Aug-05
//Problem: A_Remove_Smallest
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int cnt=0;
    sort(v.begin(),v.end());
    for(int i=1;i<n;++i){
        if(v[i]-v[i-1]<=1){
            cnt++;
        }
    }
    //cout<<cnt<<endl;
    cout<<((cnt==n-1)?"YES":"NO")<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}