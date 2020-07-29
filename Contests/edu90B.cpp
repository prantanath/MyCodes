#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    string s;
    int zero =0,one=0;
    cin>>s;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='1') one++;
        else zero++;
    }
    int ans=min(zero,one);
    if(ans%2)
    {
        cout<<"DA"<<endl;
    }
    else cout<<"NET"<<endl;

}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
