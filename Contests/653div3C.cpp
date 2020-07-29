#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int moves=0;
    for(int i=0;i<n;++i)
    {
        bool ok=false;
        if(s[i]=='(') moves++;
        else
        {
            if(moves>0)
                moves--;
        }
    }
    cout<<moves<<endl;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}


