#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    if(n%2==0){
    if((n/2)>=k){
        cout<<(2*k)-1;
    }
    else{
        cout<<(k-(n/2))*2;
        }
    }
    else{
       if((n/2)+1>=k){
        cout<<2*k-1;
    }
    else
        cout<<(k-(n/2)-1)*2;
    }


}


