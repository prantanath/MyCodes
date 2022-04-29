#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10];
    cin>>n;
    for(int i=1;i<=7;++i){
        cin>>arr[i];
    }
    int p=0;
    while(n>0){
        p++;
        if(p>7){
            p-=7;
        }
        n-=arr[p];
    }
    cout<<p;
}
