#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{   ll t,a,b,k,c=0,temp;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>k;
        c=k/2;
        temp=(a*c)-(b*c);
        if(k%2==0){
            cout<<temp<<endl;
        }
        else
            cout<<temp+a<<endl;
    }


}
