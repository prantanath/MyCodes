#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll t,n,c;
    cin>>t;
    while(t--){
        cin>>n;
        c=0;
        while(n!=1)
        {
        if(n%2==0){
            n=n/2;
        }
        else if(n%3==0){
            n=(2*n)/3;
        }
        else if(n%5==0){
            n=(4*n)/5;
        }
        else{
            c=-1;
            break;
        }
        c++;
        }
        cout<<c<<endl;
    }
}

