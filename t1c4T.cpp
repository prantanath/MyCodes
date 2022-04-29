#include<bits/stdc++.h>
using namespace std;
int binarysearch(int b[] , int n ,int x){
    int low,mid,high;
    low=0;
    high=n-1;
    //mid=(low+high)/2;
    //cin>>q;
    //while(q--){
        //cin>>x;
        while(low<=high){
            mid=(low+high)/2;
            if(b[mid]<x)
            {
                low=mid+1;
            }
            else if(b[mid]>x)
            {
                high=mid-1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }

int main()
{
    int n,q,flag=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>q;
    int x[q];
    for(int i=0;i<q;i++){
            cin>>x[i];
    int y= binarysearch(arr,n,x[i]);
    if(y==-1){
        flag=0;
        break;
    }
    else
        flag=1;
}
if(flag){
    cout<<"1"<<endl;
}
else
    cout<<"0"<<endl;
}

