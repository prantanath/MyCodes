#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    while(cin>>k){
        if(k==0)
            break;
        int n,m;
        cin>>n>>m;
        while(k--){
        int x,y;
        cin>>x>>y;
        if(x==n || y==m){
            cout<<"divisa"<<endl;
        }
        else if(x>n && y>m){
            cout<<"NE"<<endl;
        }
        else if(x<n && y>m){
            cout<<"NO"<<endl;
        }
        else if(x<n && y<m){
            cout<<"SO"<<endl;
        }
        else if(x>n && y<m){
            cout<<"SE"<<endl;
        }


    }
}
}
