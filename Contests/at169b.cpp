#include<bits/stdc++.h>
using namespace std;
const long long int val = 1e18;
int main()
{
    long long n,x=1;
    bool flag=true;
    cin>>n;
    long long arr[n+5];
    for(long long i=0;i<n;++i){
    cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]==0){
        cout<<0<<endl;
    }
    else{
    for(long long i=0;i<n;++i){
        if(arr[i]<=val/x){
        x*=arr[i];
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<x<<endl;
    }
    else
        cout<<-1<<endl;
}
}

