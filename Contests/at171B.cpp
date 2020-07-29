#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,k,mn=0;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<k;++i){
        mn+=arr[i];
    }
    cout<<mn;

}

int main()
{
    int x,t;  solve();

}


