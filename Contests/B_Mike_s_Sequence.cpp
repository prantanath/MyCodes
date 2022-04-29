//Author:  Pranta
//Date:    2022-Apr-01
//Problem: B_Mike_s_Sequence
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define fr(i,a,n) for(int i=a;i<n;++i)
#define rfr(i,a,n) for(int i=n-1;i>=0;--i)
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define all(a) (a).begin(),(a).end()
#define pr(a) cout<<a<<endl 
#define sz(a) a.size();
#define ld long double
#define ll long long
#define pb push_back
const ld PI = 3.141592653589793238462;
const ll MOD = 1000000007;
const ll INF = 1e18;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    switch (n)
    {
    case -45 ... 1199:
        cout<<1200;
        break;

    case 1200 ... 1399:
        cout<<1400;
        break;
    
    case 1400 ... 1599:
        cout<<1600;
        break;

    case 1600 ... 1899:
        cout<<1900;
        break;
    
    case 1900 ... 2099:
        cout<<2100;
        break;

    case 2100 ... 2299:
        cout<<2300;
        break;

    case 2300 ... 2399:
        cout<<2400;
        break;
    
    case 2400 ... 2599:
        cout<<2600;
        break;

    default:
        cout<<3000;
        break;
    }
}
int main()
{
    fast;
    int t;
    //cin>>t;
    //while(t--)
    solve();
}