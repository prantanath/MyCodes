#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,n;
    cin>>q;
    while(q--){
        cin>>n;
        if(n==2){
            cout<<"2"<<endl;
        }
        else
            cout<<n%2<<endl;
    }
}

