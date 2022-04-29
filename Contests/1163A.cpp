#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m;
    cin>>n>>m;
    if(m==0){
        cout<<1;
    }
    else if(m==n){
        cout<<0;
    }
    else{
        if(2*m>=n){
            cout<<n-m;
        }
        else
            cout<<m;
    }
}

