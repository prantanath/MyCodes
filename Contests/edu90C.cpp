#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
const int inf=1000000;
void solve()
{
    string s;
    ll cur=0,res=0;
    cin>>s;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='-') cur--;
        else cur++;
    }
    res=s.length();
    if(cur>=0) cout<<res<<endl;
    else
    {
        cur=abs(cur);
        res+=(cur*(cur+1))/2;
        cout<<res<<endl;
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

