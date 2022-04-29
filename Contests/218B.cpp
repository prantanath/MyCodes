#include<bits/stdc++.h>
using namespace std;
priority_queue<int>mx,mn;
int get_max(int n, int m){
    int temp,maxx=0;
    while(n>0){
        temp=mx.top();
        maxx+=temp;
        temp--;
        mx.pop();
        if(temp>0){
            mx.push(temp);
        }
        n--;
    }
    return maxx;

}
int get_min(int n, int m){
    int temp,minn=0;
    while(n>0){
    temp=-mn.top();
    minn+=temp;
    temp--;
    mn.pop();
    if(temp>0){
        mn.push(-temp);
    }
    n--;
    }
    return minn;
}
int main()
{
    int n,m,a;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        cin>>a;
        mx.push(a);
        mn.push(-a);
    }
    cout<<get_max(n,m)<<" "<<get_min(n,m);

}

