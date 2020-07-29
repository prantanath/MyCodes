#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int l,r,d,cnt=0;
    cin>>l>>r>>d;
    for(int i=l;i<=r;++i)
    {
        if(i%d==0)
            cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    fast;
    int t;
    solve();
}


