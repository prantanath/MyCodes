#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n+5];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    //cout<<arr[2];

    ll Start=1,End=n-2,x=0,z=0,ans=0,a=(n+1)/2;
    x=arr[0];
    z=arr[n-1];
    if(x==z)
    {
        if(n>=2) ans=max(x,ans);
    }
    while(Start<=End){

        while(z>x){

            //cout<<Start;
            x+=arr[Start];
            Start++;
            //cout<<arr[2]<<endl;
        }
        while(x>z){

            //cout<<End;
            z+=arr[End]
             End--;
        }
        if(x==z){

           // cout<<Start;
           ans=max(x,ans);
           //cout<<x;
            x+=arr[Start];
            Start++;
        }

       // cout<<Start<<" "<<End<<" ";

    }
   cout<<ans;

}
