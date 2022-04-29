#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    int arr[51];
    while(t--){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int mn= *max_element(arr,arr+n);
    for(int i=1;i<n;++i){
        if(arr[i]-arr[i-1]<mn){
            mn=arr[i]-arr[i-1];
        }
    }
    //cout<<arr[1]-arr[0]<<endl;
    cout<<mn<<endl;
}
}

