#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0;
    //bool flag=true;
    cin>>n;
    vector<int>v(2*n),v1;
    for(int i=0;i<2*n;++i){
        cin>>v[i];
    }
    v1=v;
    //reverse(v1.begin(),v1.end());
    sort(v.begin(),v.end());
    for(int i=1;i<v1.size();++i){
        if(v1[i]==v1[i-1]){
            c++;
        }
    }
    if(c==2*n-1){
        cout<<-1<<endl;
    }
    else{
        for(auto x: v){
            cout<<x<<" ";
        }
    }
}
