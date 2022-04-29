#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a;
    cin>>n>>a;
    while(a--){
        if(n%10==0){
            n/=10;
        }
        else
        {
            n-=1;
        }
    }
    cout<<n<<endl;
}
