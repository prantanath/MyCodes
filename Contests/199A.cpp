#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
vector<ll>fib;
///alternate minimal sol is to print 0 0 n
void fibonacci(){
    fib.pb(0);
    fib.pb(1);
    int f1=fib[0];
    int f2=fib[1];
    for(int i=1;i<=46;++i){
        int f=f1+f2;
        f1=f2;
        f2=f;
        fib.pb(f);
    }
}
int main()
{
    fibonacci();
    ll n;
    cin>>n;
    if(n<=2){
        cout<<0<<" "<<0<<" "<<n;
    }
    else{
    for(int i=1;i<=46;++i){
        if(fib[i]==n){
            cout<<fib[i-1]<<" "<<fib[i-3]<<" "<<fib[i-4];
        }
    }
    }
}

