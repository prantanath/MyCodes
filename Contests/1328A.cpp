#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll t,a,b,c=0;
    cin>>t;
    while(t--){
            c=0;
        scanf("%lld%lld",&a,&b);
        if(a%b!=0){
            c=(((a/b)+1)*b)-a;
            //c++;
        }
            cout<<c<<"\n";

}
}
