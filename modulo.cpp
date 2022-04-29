#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;
ll power(ll base,ll pwr,ll mod){
    ll bit=1;
    for(ll i=0;i<pwr;++i)
         bit=bit*base%mod;
    return bit;
}
int main()
{
    int n;
    cin>>n;
    cout<<power(2,n,MOD);
}
