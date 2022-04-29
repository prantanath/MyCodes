#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    if(n<=2) cout<<n;
    else{
    int cnt=2,ans=0;
    for(int i=3;i<=n;++i){
        if(arr[i-1]+arr[i-2]==arr[i]){
            cnt++;
        }
        else{
            cnt=2;
        }
        ans=max(cnt,ans);
    }
    cout<<ans;
    }
}
