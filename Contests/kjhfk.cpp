//Author:  Pranta
//Date:    2021-Jul-30
//Problem: A_PizzaForces
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF (int)1e9
#define ll long long
#define pb push_back
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    if(n<=6) {
        cout<<"15"<<endl;
        return;
    }
    if(n<=8) {
        cout<<"20"<<endl;
        return;
    }
    if(n<=10) {
        cout<<"25"<<endl;
        return;
    }
    else{
        if(n%2) {
            n++;
            ll ans= (double)n*2.5;
            cout<<ans<<endl;
        }
        else{
            ll ans=(double) n*2.5;
            cout<<ans<<endl;
        }
    }

    //cout<<min(min(a,b),ans)<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
