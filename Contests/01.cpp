//Author:  Pranta
//Date:    2020-Sep-04
//Problem: con 3
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n),vec;
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int cnt=0,cons=0;
    for(int i=1;i<n;++i){
        if(v[cons]+(i)*2<=v[i]){
            cnt++;
            continue;
        }
        else {
        cons++;
        vec.push_back(cnt);
        cnt=0;}
    }
    for(int  x:vec)
    {
        cout<<x<<" ";
    }
}
int main()
{
    fast;
    int t;
    //cin>>t;
    //while(t--)
    solve();
}
