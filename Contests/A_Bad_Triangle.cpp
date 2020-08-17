//Author:  Pranta
//Date:    2020-Aug-14
//Problem: A_Bad_Triangle
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;++i) cin>>arr[i];
    if(arr[1]+arr[2]>arr[n]) cout<<-1<<endl;
    else cout<<1<<' '<<2<<' '<<n<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}