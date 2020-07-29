#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[2*n+5];
    set<int>us;
    vector<int>v;
    int u=0;
    for(int i=0;i<2*n;++i)
    {
        cin>>arr[i];
        us.insert(arr[i]);
        if(us.size()>u)
        {
            u=us.size();
            v.push_back(arr[i]);
        }
    }
    for(auto x: v)
    {
        cout<<x<<' ';
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



