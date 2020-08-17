//author:pranta
//date: "2020-08-02"
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,d,c=0;
    cin>>n>>d;
    while(n--){
        double x,y;
        cin>>x>>y;
        double ans=sqrt(x*x+y*y);
        //cout<<ans<<endl;
        if(ans<=d) c++;
    }
    cout<<c<<endl;
}
int main()
{
    fast;
    int t;
    solve();
}