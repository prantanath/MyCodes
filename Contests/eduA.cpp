#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a>=2*b || b>=2*a){
            cout<<min(a,b)<<endl;
        }
        else if(a==0 || b==0){
            cout<<0<<endl;
        }
        else{
            int st=a/3;
            int di=b/3;
            if(a%3+b%3>=3){
                cout<<st+di+1<<endl;
            }
            else
            {
                cout<<st+di<<endl;
            }
        }
    }
}
