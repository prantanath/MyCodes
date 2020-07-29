#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    string s,ans="";
    cin>>n>>s;
    int zero=0,one=0;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='0')
        {
            zero++;
        }
        else break;

    }
    for(int i=n-1;i>=0;--i)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else break;

    }
    if(one+zero==n) cout<<s<<endl;
    else{
    for(int i=0;i<zero+1;++i) ans+=(char)'0';
    for(int i=0;i<one;++i) ans+=(char)'1';
    cout<<ans<<endl;}
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
