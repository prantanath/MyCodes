#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n,a,b,cnt=0;
    cin>>a>>b>>n;
    if(b<a){
        swap(a,b);
    }
//    cout<<a<<b;
    while(a<=n and b<=n)
    {
        a+=b;
        cnt++;
        if(a>n){
            break;
        }
        else{
        b+=a;
        cnt++;}
    }
    cout<<cnt<<endl;
//    cout<<a<<" "<<b;
}

int main()
{
    int x,t;
    cin>>t;
    while(t--){
    solve();
    }
}

