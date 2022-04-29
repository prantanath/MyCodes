#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define ll long long
ll prime[MAX/32];
bool check(ll n,ll pos){ return n & (1<<pos);}
int Set(ll n, ll pos){return n | (1<<pos) ;}
void sieve(ll x)
{
    int n=MAX;
    ll sqr=sqrt(n);
    for(ll i=3;i<=sqr;i+=2){
        if(check(prime[i/32],i%32)==0)
        {
            for(ll j=i*i;j<=n;j+=2*i)
            {
                prime[j/32]=Set(prime[j/32] ,j%32);
            }
        }
    }
    bool flag=false;

    ll sq=sqrt(x);
        if(sq*sq==x){
        if(check(prime[sq/32],sq%32)==0){
                flag=true;
            }
        }

        if(x==4)
            cout<<"YES"<<endl;
        else if(x%2==0)
            cout<<"NO"<<endl;
        else if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

}
int main()
{
    ll x,t;
    cin>>t;
    while(t--){
    cin>>x;
    sieve(x);
    }
}
