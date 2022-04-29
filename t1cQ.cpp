#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll x,sum=0,temp=0;
    cin>>x;
    temp=x/500;
    x=x%500;
    sum=temp*1000;
    temp=x/5;
   // x=x%5;
    sum+=temp*5;
    cout<<sum<<endl;

}


