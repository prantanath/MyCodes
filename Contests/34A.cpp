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
    int mn=9999,p1=0,p2=0;
    for(int i=1;i<=n;++i){
        for(int j=i+1;j<=n;++j){
        if(abs(arr[i]-arr[j])<mn){
            if(i==j+1 || i==j-1 || i==1&&j==n){
           mn= abs(arr[i]-arr[j]);
             p1=i;
             p2=j;}
        }
    }
    }
    //cout<<mn<<endl;
    cout<< p1<<" "<< p2;

}

