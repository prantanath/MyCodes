#include<iostream>
using namespace std;
int main() {
    long long t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int c=0;
        bool flag=true;
        if(n<m){
                while(n!=m){
                if(n*8<=m){ n*=8; c++;}
                else if(n*4<=m){ n*=4; c++;}
                else if(n*2<=m){n*=2; c++;}
                else break;
                //if(n==m) break;
                }

            }
        else if(n>m){
                while(n!=m){
                if(n/8>=m){ n/=8; c++;}
                else if(n/4>=m){ n/=4; c++;}
                else if(n/2>=m){n/=2; c++;}
                else break;
                //if(n==m) break;
                }

            }

        if(n==m)
        cout<<c<<endl;
        else
            cout<<-1<<endl;
}
}
