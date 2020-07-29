
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    string s,t;
    int cnt=0;
    cin>>s>>t;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]!=t[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    fast;
    int t;
    solve();
}

