#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
                a[i]=a[i]-1;
            }
            else
                a[i]=a[i];
    }
    /*int max=a[0],min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }*/
    for(ll i=0;i<n;i++){
            //for(j=min;j<=max;j++)

        cout<<a[i]<<" ";
    }
    //cout<<max<<min;
}
