#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,z;
    while(t--){
        cin>>a>>b;
        if(a>b){
        if(2*b>=a){
            cout<<4*b*b<<endl;
        }
        else{
            cout<<a*a<<endl;
        }
    }
    else{
        if(2*a>=b){
            cout<<4*a*a<<endl;
        }
        else
            cout<<b*b<<endl;
    }
}
}
