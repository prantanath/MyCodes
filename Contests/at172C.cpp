#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>arr(n),brr(m);
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        if(i) arr[i]+=arr[i-1];
    }
    for(int i=0;i<m;++i)
    {
        cin>>brr[i];
        if(i) brr[i]+=brr[i-1];
    }
    int st1=upper_bound(arr.begin(),arr.end(),k)-arr.begin();
    int st2=upper_bound(brr.begin(),brr.end(),k)-brr.begin();
    int book=max(st1,st2);
    for(int i=0;i<n;++i)
    {
        if(arr[i]>k)
        {
            int st2=upper_bound(brr.begin(),brr.end(),k)-brr.begin();
            book=max(book,st2);
            break;
        }
        else
        {
            int rem=k-arr[i];
            int st2= upper_bound(brr.begin(),brr.end(),rem)-brr.begin();
            //cout<<st2<<' '<<i<<endl;
            book=max(book,i+st2+1);
        }
    }
    cout<<book<<endl;
}

int main()
{
    fast;
    int t;
    solve();
}


