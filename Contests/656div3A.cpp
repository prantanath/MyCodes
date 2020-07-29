#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll x,y,z;
    cin>>x>>y>>z;
    bool ok = true;
    if((x==y&&x>=z)||(x==z&&x>=y)||(z==y&&z>=x))
    {
        ok=true;
        if(x==y)
        {
            x=1;
        }
        else if(x==z)
        {
            x=1;
        }
        else if(z==y)
        {
            y=1;
        }
    }
    else
    {
        ok=false;
    }
    if(ok)
    {
        cout<<"YES"<<endl;
        cout<<x<<' '<<y<<' '<<z<<' '<<endl;

    }
    else
        cout<<"NO"<<endl;


}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}


