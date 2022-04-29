#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tmp,tmp2,mx=0,mn=0,mn1=0,mx1=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    for(int i=0;i<t;i++){
        if(a[i]!=a[t-1]){
            mx=abs(t-1-i);
            if(mx>mn){
                    mn=mx;
                }
        }
    }
    for(int i=t-1;i>0;i--){
        if(a[i]!=a[0]){
            mx1=i;
            if(mx1>mn1){
                    mn1=mx1;
                }
        }
    }
    if(mn1>mn)
        cout<<mn1<<endl;
    else
        cout<<mn<<endl;

                /*if(tmp>mn){
                    mn=tmp;
                }
                if(tmp2>mx){
                    mx=tmp2;
                }*/


    //cout<<mn<<endl;
}
