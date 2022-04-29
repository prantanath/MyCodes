#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t,n,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k==n){
            cout<<k+1<<endl;
        }
        else if(k<n)
        {
            cout<<k<<endl;
        }
        else
        {
            ll z=(k/n);
            ll x =k;
            while(z!=0){
                ans=z+x;
                z= (ans/n)-(x/n);
                x=ans;

            }
            cout<<ans<<endl;
        }
    }
}
