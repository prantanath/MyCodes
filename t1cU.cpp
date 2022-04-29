#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,min=0,s;
    cin>>n>>k;
    int a[k];
    while(k--){
        cin>>a[k];
    }
    for(int i=0;i<k;i++){
             s=0;
        for(int j=0;j<k;j++){
            s+=abs(a[i]-a[j]);
        }
    if(min>s){
        min=s;
    }
    }
    cout<<min;
}
