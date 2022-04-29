#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    while(n%2){
        n--;
    }
    cout<<n/2<<endl;
}

int main()
{
    int x,t;
    cin>>t;
    while(t--){
    solve();
    }
}

