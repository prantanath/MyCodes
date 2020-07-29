#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    set<int>s;
    vector<int>v;
    bool ok=false;
    for(int i=1;i<=n;++i)
    {
        cin>>arr[i];
        if(arr[i]<=n)
        {
            s.insert(arr[i]);
        }
    }
    for(int i=2;i<=n-1;++i)
    {
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
        {
            ok = true;

            v.push_back(i-1);
            v.push_back(i);
            v.push_back(i+1);
            break;
        }
    }
    if(ok and s.size()==n)
    {
        cout<<"YES"<<"\n";
        for(int i=0;i<v.size();++i)
        {
            cout<<v[i]<<' ';
        }
        cout<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
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


