#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n<31) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        if(n==36||n==44||n==40)
        cout<<6<<' '<<10<<' '<<15<<' '<<n-31<<endl;
        else
        cout<<6<<' '<<10<<' '<<14<<' '<<n-30<<endl;
    }
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}


