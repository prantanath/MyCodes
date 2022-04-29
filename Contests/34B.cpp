#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],earn=0;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<m;++i){
        if(arr[i]<0){
            earn+=abs(arr[i]);
        }
    }
    cout<<earn<<endl;
}


