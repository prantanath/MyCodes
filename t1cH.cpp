#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s=0,i;
    cin>>n>>k;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n,greater<int>());
    for(i=0;i<k;i++){
        s+=b[i];
    }
    //cout<<s;
    int c=0;
    for(i=0;i<n;i++){
        for(j=0;j<k;j++)
            if(a[i]==b[c] && )
}
