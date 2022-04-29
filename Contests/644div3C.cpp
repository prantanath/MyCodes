#include<bits/stdc++.h>
using namespace std;
int chk(int arr[], int n){
    int c=0;
    for(int i=1 ;i<=n;++i){
        if(abs(arr[i]-arr[i-1])==1){
            c++;
        }
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
    int arr[n],c1=0,c=0,c3=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int cnt=0,cnt1=0;
    for(int i=0;i<n;++i){
        if(arr[i]%2==0){
            cnt++;
        }
        else cnt1++;
        }
    if(cnt%2==0 && cnt1%2==0){
        cout<<"YES"<<endl;
    }
    else if(chk(arr,n)>0){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
}

