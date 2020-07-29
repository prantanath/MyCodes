#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int boy,girl,n,cnt=0;
    cin>>boy>>girl>>n;
    for(int i=0;i<n+1;++i)
    {
        if(i<=boy and n-i<=girl)
            cnt++;
    }
    cout<<cnt;
}

int main()
{
    fast;
    int t;
    solve();
}


