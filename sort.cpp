#include<bits/stdc++.h>
using namespace std;
int arr[55];
int main()
{
    int n=53,sum=0;
    map<int,int>mp;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        sum+=arr[i];
        mp[arr[i]]++;
    }
    sort(arr,arr+n);
    for(auto it=mp.begin();it!=mp.end();++it)
    {
        cout<<it->first<<" = "<<it->second<<endl;
    }
}
