#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,a,sum=0,neg=0;
    cin>>n>>k;
    ll arr[n+5];
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    //cout<<sum;
    for(int i=0; i<n; ++i)
    {
        if(k>0){
        if(arr[i]<0)
        {
            arr[i]*=-1;
            k--;
        }
        }
    }
    sort(arr,arr+n);
    if(k%2==1)
    {
        arr[0]*=-1;
    }

    for(int i=0; i<n; ++i)
    {
        sum+=arr[i];
    }

    cout<<sum;
}

