#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,u,d,f;
    while(cin>>h>>u>>d>>f)
    {
        if(h==0)
            break;
        int day=0;
        bool flag=true;
        float fac=(float)(u*f)/100.0,z=u,x=0;
        //x+=z;
        //x-=d;
        while(1)
        {

            day++;
            if(z>0)
            {
                x+=z;
            }
            z-=fac;
           if(x>h){
                break;
            }
           // else{
               x-=d;
            //}

            //day++;
            if(x<0){
                flag=false;
                break;
            }
            //cout<<fac;
        }
        if(flag)
        cout<<"success on day "<<day<<endl;
        else
            cout<<"failure on day "<<day<<endl;
    }
}

