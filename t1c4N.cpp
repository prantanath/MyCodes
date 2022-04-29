#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
int main()
{
    int q,gvn,x;
    vector<int> v;
    cin>>q;
    while(q--){
        cin>>gvn;
        if(gvn==0){
            cin>>x;
            v.pb(x);
        }
        else if(gvn==1){
            cin>>x;
            cout<<v[x]<<endl;
        }
        else if(gvn==2){
            v.pp();
        }
    }
}
