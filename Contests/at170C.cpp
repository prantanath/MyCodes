#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
        //ck[i]=arr[i];
    }
    int z=x,chk=x;
   // x-=1;
    if(n==0){
        cout<<chk;
    }
    else{
    while(1){
        auto it= find(v.begin(),v.end(),x);
        if(it!=v.end()){ x--;}
        auto it2= find(v.begin(),v.end(),z);
        if(it2!=v.end()) {z++;}
        if(it==v.end() || it2==v.end()){
                //z++;
                //x--;
                int p=z-chk;
                int n=chk-x;
                //cout<<z<<x;
            if(p<n){
                cout<<z;
            }
            else cout<<x;
            break;
        }
    }

}
}


