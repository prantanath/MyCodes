
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    string s;
    char c;
    int r=0,S=0,p=0;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; ++i)
    {
        if(s[i]=='R') r++;
        else if(s[i]=='P') p++;
        else S++;
    }
    int ans=max({r,p,S});
    if(ans==r) c='P';
    else if(ans==p) c='S';
    else c='R';
    for(int i=0;i<n;++i) cout<<c;
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


