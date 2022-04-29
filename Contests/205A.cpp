#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    int mn=arr[1],pos=1,c=0;
    for(int i=2;i<=n;++i){
        if(arr[i]<mn){
            mn=arr[i];
            pos=i;
        }
       /* else if(arr[i]==mn){
            flag=false;
            break;
        }*/
    }
    for(int i=1;i<=n;++i){
        if(arr[i]==mn){
                c++;
           // flag=false;
        }
        //else
            //flag=true;
    }
    if(c==1){
        cout<<pos;
    }
    else{
        cout<< "Still Rozdil";}
}
