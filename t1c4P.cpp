#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
int main()
{
    int q,gvn,x,d;
    deque <int> dq;
    // <int>::iterator it;
    cin>>q;
    while(q--){
        cin>>gvn;
        if(gvn==0){
            cin>>d>>x;
            if(d==0){
                dq.push_front(x);
            }
            else
                dq.pb(x);
        }
        else if(gvn==1){
                cin>>x;
            cout<<dq[x]<<endl;
        }
        else if(gvn==2){
            cin>>d;
            if(d==0){
                dq.pop_front();
            }
            else
                dq.pp();
        }
    }
}

