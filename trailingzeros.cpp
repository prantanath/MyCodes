#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;
ll zero(ll n){
    ll x=0;
    while(n>=5){
        x+=n/5;
        n/=5;
    }
    return x;
}
int main()
{
    int n;
    cin>>n;
    cout<<zero(n);
}

