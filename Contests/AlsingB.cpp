#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,cnt=0;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;++i)
    {
        cin>>arr[i];
        if(i%2 and arr[i]%2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    fast;
    int t;
    solve();
}


