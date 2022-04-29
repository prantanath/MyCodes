//Author:  Pranta
//Date:    2021-Aug-30
//Problem: Untitled-1
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define sz(a) a.size();
#define ld long double
#define ll long long
#define pb push_back
const ld PI = 3.141592653589793238462;
const ll MOD = 1000000007;
const ll INF = 1e18;
using namespace std;
void solve(int x)
{
    string s;
    cin>>s;
    int n=sz(s);
    int vow=0,con=0,mxVo=0,mxCon=0;
    map<char,int>mp;
    for(int i=0; i<n; ++i)
    {
        mp[s[i]]++;
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') vow++;
        else con++;
    }
    int mx=INT_MIN;
    for(int i=0; i<n; ++i)
    {
        mx=max(mx,mp[s[i]]);
    }
    for(int i=0; i<n; ++i)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
             mxVo=max(mxVo,mp[s[i]]);
        }
        else
        {
            mxCon=max(mxCon,mp[s[i]]);
        }
    }
    int Op1=con+(vow-mxVo)*2;
    int Op2=(con-mxCon)*2+vow;
    cout<<"Case #"<<x<<": "<<min(Op1,Op2)<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)solve(i);
}
