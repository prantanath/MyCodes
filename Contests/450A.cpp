#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;
    map<int,int>mp;
    deque<int>dq,d;
    int mx=0,last=0;
    for (int i=1;i<=n;++i){
        cin>>a;
        d.push_back(a);
       // mp[arr[i]]=i;
        dq.push_back(i);

    }
    while(dq.size()>1){
        if(d.front()>m){
            d.push_back(d.front()-m);
            dq.push_back(dq.front());
        }
        d.pop_front();
        dq.pop_front();
    }
    cout<<dq.front();
}
