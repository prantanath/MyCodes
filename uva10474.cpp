#include<bits/stdc++.h>
#define ll long long
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
                    while(b[mid-1]==x) mid--;
                return mid;
            }
        }
        return -1;
    }

int main()
{
    int n,q,c=0,z;
    while(cin>>n>>q){
            c++;
    int a[n+2],x[q+2];
    if(n==0 && q==0)
        break;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>x[i];
    }
    sort(a,a+n);
    cout<<"CASE# "<<c<<":"<<endl;
    for(int i=0;i<q;i++){
        z= binarysearch(a,n,x[i]);

        if(z<0){
        cout<<x[i]<<" not found"<<endl;
        }
        else{
            cout<<x[i]<<" found at "<<z+1<<endl;
        }
    }

}
}
