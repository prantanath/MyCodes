#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,x,m;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>n>>x>>m;
        ll new_x=x,new_xs=x;
        while(m--){
            cin>>l>>r;

        if(new_x>=l && new_xs<=r){
        new_xs=min(new_xs,l);
        new_x=max(new_x,r);
        }
        else continue;
    }
    cout<<(new_x-new_xs)+1<<endl;
}
}

