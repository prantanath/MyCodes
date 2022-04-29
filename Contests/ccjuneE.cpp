#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        queue<int>evn,odd;
        cin>>n;
        for(int i=1;i<=n*n;++i){
            if(i%2==0)
                evn.push(i);
            else odd.push(i);
        }
        for(int i=1;i<=n;++i){
                if(i%2==1){
            for(int j=1;j<=n;++j){
                if(j%2==1){
                cout<<odd.front()<<" ";
                odd.pop();
                }
                else{
                cout<<evn.front()<<" ";
                evn.pop();
                }
                }
                }
                else{
                for(int j=1;j<=n;++j){
                if(j%2==1){
                cout<<evn.front()<<" ";
                evn.pop();
                }
                else{
                cout<<odd.front()<<" ";
                odd.pop();
                }
                }
                }
            cout<<endl;
        }
    }
}
