#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,x=0,y=0,silver=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='U') y++;
        else if(s[i]=='R') x++;
        if(x==y)
        {
            if(s[i+1]==s[i]){
            silver++;
            }
        }
    }
    cout<<silver;
}

int main()
{
    fast;
    int t;
    solve();
}
