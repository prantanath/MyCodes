#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,x,b,y;
    bool flag=false;
    cin>>n>>a>>x>>b>>y;
    //if(x<a) x=(a-x)+n;
    //if(y>b) y=(y-b)+n;
    while(1){
        if(a==b){
            flag=true;
            break;
        }
        if(a==x || b==y){
            break;
        }
        a++;
        if(a>n) a-=n;
       // cout<<a<<endl;
        b--;
        if(b<1) b+=n;
       // cout<<b<<endl;

    }
    if(flag){
        cout<<"yes"<<endl;
    }
    else
        cout<<"no"<<endl;
}
