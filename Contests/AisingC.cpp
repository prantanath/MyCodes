#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
const int val= 1e4;
void solve()
{
    int n,cnt=0;
    map<int,int>mp;
    cin>>n;
    for(int i=1;i<101;++i){
        for(int j=1;j<101;++j){
            for(int k=1;k<101;++k)
            {
                int ans=i*i+j*j+k*k+i*j+j*k+k*i;
                if(ans<=val)
                {
                    mp[ans]++;
                }
            }}}
    for(int i=1;i<=n;++i)
    {
        cout<<mp[i]<<"\n";
    }
}

int main()
{
    fast;
    int t;
    solve();
}

