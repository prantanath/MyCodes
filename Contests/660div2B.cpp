#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
        int temp=0;
        if(n%4)
            temp=(n/4)+1;
        else
            temp=n/4;
        for(int i=0; i<n-temp; ++i) cout<<9;
        for(int i=0; i<temp; ++i) cout<<8;
        cout<<endl;

}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
        solve();
}


