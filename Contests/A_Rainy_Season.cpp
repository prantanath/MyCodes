//Author:  Pranta
//Date:    2020-Aug-15
//Problem: A_Rainy_Season
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
  string s;
    cin>>s;
    bool ok=false;
    int cnt=0;
    for(int i=0;i<3;++i){
        if(s[i]=='R'){
            ok=true;
            if(s[i+1]=='R'){
                cnt++;
            }
        }
    }
    if(ok){
        if(cnt>0) cout<<cnt+1;
        else cout<<1;
    }
    else
    {
        cout<<0;
    }
    
}
int main()
{
    fast;
    int t;
    solve();
}