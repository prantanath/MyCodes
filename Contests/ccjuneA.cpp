#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n+5],pc=0,tp=0;
        for(int i=0;i<n;++i){
            cin>>arr[i];
            tp+=arr[i];
            if(arr[i]>k){
                pc+=k;
            }
            else{
                pc+=arr[i];
            }
        }
        cout<<tp-pc<<endl;
    }
    return 0;
}
