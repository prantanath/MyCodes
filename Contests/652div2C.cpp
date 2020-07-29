#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5],brr[k+5];
    vector<int>v[k];
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    for(int i=0;i<k;++i)
    {
        cin>>brr[i];
    }
    sort(brr,brr+n);
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<k;++i)
    {
        for(int j=0;j<brr[i];++j)
        v[i].push_back(s[j])

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
