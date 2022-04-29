#include<bits/stdc++.h>
using namespace  std;
#define ll long long
ll big_mod(ll b,ll p,ll m){
    ll ans=0;
    if(p==0)
        return 1;
    else if(p%2==0){
        ans=(big_mod(b,p/2,m)%m*big_mod(b,p/2,m)%m)%m;
        return ans;
    }
    else
        ans=((b%m)*(big_mod(b,p-1,m)%m))%m;
        return ans;
}
int main()
{
    ll b,p,m;
    while(cin>>b>>p>>m){

    cout<<big_mod(b,p,m)<<endl;
    }

}

