#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,me=0,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        me+=a[i];
        cnt++;
        if(me>sum-me)
            break;
    }
    cout<<cnt<<"\n";
}

