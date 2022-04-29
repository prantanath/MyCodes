#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n,k,x,ans;
    cin>>n>>k;
   /* if(n<k){
        cout<<n;
    }
   // else{
        if(k==1){
        cout<<"0\n";
        }
        else{*/
             x=n%k;
             ans=abs(x-k);
             if(x>ans)
            cout<<ans;
            else
                cout<<x;
        //}
   // }

}

