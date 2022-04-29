#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,t;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n+5],cnt=1;
        for(int i=1;i<=n;++i){
            cin>>arr[i];
        }
        sort(arr+1,arr+n+1);
        for(int i=1;i<=n;++i){
            if(arr[i]<=i){
                cnt=i+1;
            }
        }
        cout<<cnt<<endl;
}
}


