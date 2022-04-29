#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        bool flag=true;
        int arr[n+5],x=0,ten=0;
        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
        }
        x=arr[0];
        if(x>5)
        {
            cout<<"NO"<<endl;
            //  flag=false;
        }
        else
        {
            for(int i=1; i<n; ++i)
            {
                if(arr[i]>5)
                {
                    if((arr[i]-5)<=x || (arr[i]-5)<=ten)
                    {
                        if(arr[i]-5==10 && ten>=10){
                        ten-=10;
                        }
                        else{
                        x-=(arr[i]-5);
                        if(x<0){
                            flag=false;
                            break;
                        }
                        }
                        if(arr[i]==10) ten+=10;

                    }
                    else
                    {
                        flag=false;
                        break;
                    }
                }
                else
                {
                    x+=arr[i];
                }
            }
            if(flag)
            {
                cout<<"YES"<<endl;
                //cout<<x<<endl;
            }
            else
                cout<<"NO"<<endl;
        }

    }
    return 0;
}


