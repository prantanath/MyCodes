#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n,index[11];
    string s="codeforces";
    char a='s';
    cin>>n;
    for(int i=0;i<10;++i){
        index[i]=1;
    }
    ll j=0,z=0,frq=1;
    while(frq<n)
    {
        index[j]++;
        (j+=1)%=10;
        frq=1;
        for(int i=0;i<10;++i){
        frq*=index[i];
        }
    }
    for(int i=0;i<10;++i)
    {
        for(int j=0;j<index[i];++j)
        {
            cout<<s[i];
        }
    }
    //cout<<s+string(n-1,a);
}

int main()
{
    int x,t;

    solve();
}


