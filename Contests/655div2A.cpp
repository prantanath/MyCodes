#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,cnt=0;
    cin>>n;
    int x=1;
    while(n--)
    {
        if(cnt%2==0 and cnt>0)
        {
            x+=2;
        }
        cout<<x<<' ';
        cnt++;
    }
    cout<<"\n";
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}


