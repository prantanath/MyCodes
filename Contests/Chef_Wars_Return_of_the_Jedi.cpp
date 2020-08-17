//Author:  Pranta
//Date:    2020-Aug-09
//Problem: Chef_Wars_Return_of_the_Jedi
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int darth,p;
    cin>>darth>>p;
    while(darth>0){
        if(p<=0) break;
        darth-=p;
        p/=2;
    }
    if(darth<=0) cout<<1<<"\n";
    else cout<<0<<"\n";
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}