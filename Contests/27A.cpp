#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    for(int i=1;i<=3000;++i){
        if(i!=arr[i])
        {
            cout<<i;
            return 0;
        }
    }
    cout<<arr[n]+1;
}
