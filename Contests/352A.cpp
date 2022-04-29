#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,f=0,z=0;
    for(int i=0;i<n;++i){
        cin>>a;
        if(a==5){
            f++;
        }
        else
            z++;
    }
    if(f/9>0 && z>0){
        for(int i=0;i<(f/9)*9;++i){
            cout<<"5";
        }
        for(int i=0;i<z;++i){
            cout<<"0";
        }
    }
    else
    if(z>0){
        cout<<"0";
    }
    else
        cout<<-1;
}
