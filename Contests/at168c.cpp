#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,h,m;
    cin>>a>>b>>h>>m;
    long double ans;
    double deg=(h*30+0.5*m-6*m);
    long double cs=cosl(deg*M_PI/180);
    ans=((long double)(a*a+b*b))-((long double )2*a*b*cs);
    cout<<setprecision(20)<<sqrt(ans);


}
