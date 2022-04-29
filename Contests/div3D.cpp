#include<bits/stdc++.h>
using namespace std;
int lrgdiv(int n, int k){
    int div=0;
    for(int i=1;i<=sqrt(n);++i){
        if(n%i==0){
           if(i<=k){
            div=max(div,i);
           }
           if(n/i<=k){
            div=max(div,n/i);
           }
        }
    }
    return div;
}
int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--){
    cin>>n>>k;
    if(n<=k){
        cout<<"1"<<endl;
    }
    else
    {
        cout<<n/lrgdiv(n,k)<<endl;
    }
}
}
