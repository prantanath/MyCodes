#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,u,d,f;
    cin>>h>>u>>d>>f;
    float factor=(float)(u*f)/100.0,z=u;
    int x=0,day=0;
    while(x<h){
        if(day>0){
            z-=factor;
        }
        x+=u;
        x-=d;
        day++;
    }
    cout<<day
}
