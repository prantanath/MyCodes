#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,k,j=1;
    string s;
    cin>>n>>k>>s;
    int first=s[0]-'0';
    if(n==1)
    {
        if(k>=1) cout<<0;
        else cout<<s;
    }
    else{
    if(s[0]!='1' and k>0)
    {
        s[0]='1';
        k--;
    }
    while(j<n and k>0)
    {
        if(s[j]!='0')
        {
            s[j]='0';
            k--;
        }
        j++;
    }
//    if(first!=1 and k>=1)
//    {
//        s[0]='1';
//    }

//    if(n>1)
//    cout<<s;
//    else
//    cout<<0;
    cout<<s;
}
}

int main()
{
    fast;
    int t;
    solve();
}
