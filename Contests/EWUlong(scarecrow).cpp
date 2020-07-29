#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve(int x)
{
    int n,cnt=0;
    cin>>n;
    string s;
    cin>>s;;
    for(int i=0;i<n;++i)
    {
        if(s[i]=='.')
        {
            cnt++;
            i+=2;
        }
    }
    cout<<"Case "<<x<<": "<<cnt<<endl;
}

int main()
{
    fast;
    int t,x=0;
    cin>>t;
    while(t--)
    solve(++x);
}
