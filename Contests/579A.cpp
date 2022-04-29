#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,temp=0;
    cin>>x;
    while(x!=0){
        if(x%2!=0){
            temp+=x%2;
        }
        x/=2;
    }
    cout<<temp<<endl;
}
