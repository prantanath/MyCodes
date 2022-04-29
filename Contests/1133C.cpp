#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll cnt=1,ans=0,st=0,nd=1,j=0;
   /* if(arr[nd]-arr[st]<=5)
    {
        cnt=nd-st;
        ans=max(ans,cnt);
    }
    for(int i=0;i<n;i++;){
        if(arr[j]-arr[i]<=5){
            cnt=j-i;
            ans=max(cnt,ans);
        }
        else
        {
            j++;
        }
    }*/
    while(nd<n)
    {
        if(arr[nd]-arr[st]<=5)
        {
            cnt=nd-st;
            ans=max(cnt,ans);
            nd++;
        }
        else{
            st++;
        }
    }
    // }
    cout<<ans+1<<endl;
}
