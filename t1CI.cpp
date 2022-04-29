#define ll long long int
#include<iostream>
using namespace std;
int main()
{
    ll n,v,l,r,t,block,tot,ans;
    cin>>t;
    while(t--)
    {
        block=0;tot=0;ans=0;
        cin>>n>>v>>l>>r;
        block=r/v-l/v;
        tot=n/v;
        /*if(v==l==r){
            cout<<"0\n";
            }*/
        if(l%v==0){
        block++;
        ans=tot-block;
        cout<<ans<<"\n";
        }
        else{
            ans=tot-block;
            cout<<ans<<"\n";}
    }
}
