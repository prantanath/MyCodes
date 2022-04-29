#include<iostream>
using namespace std;
int main() {
    long long t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int c=0;
        //bool flag=true;
        if(n>m){
            swap(n,m);
            }
        while(n!=m){
            if(n*8<=m) n*=8;
            else if(n*4<=m) n*=4;
            else if(n*2<=m) n*=2;
            else break;9
            c++;
            //if(n==m) break;
            }
            if(n==m){
                cout<<c<<endl;
            else
                cout<<-1<<endl;
}
}
