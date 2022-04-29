#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll f[q],d[q],ud=0,lv=0;
        for(ll i=0;i<q;i++){
            cin>>f[i]>>d[i];
        }
        lv=f[0];
        for(ll i=0;i<q;i++){
            ud+=abs(d[i]-f[i]);
        }
        for(ll i=0;i<q-1;i++){
            lv+=abs(d[i]-f[i+1]);
        }
        cout<<ud+lv<<endl;
    }
    return 0;
}
