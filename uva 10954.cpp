#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    int n;
    while(cin>>n){
    if(n==0) break;
    int a[n+5];
    for(int i=0;i<n;++i){
        cin>>a[i];
        pq.push(-a[i]);
    }
    int sum=0;
    while(pq.size()>1){
        int x=-pq.top();
        pq.pop();
        int y=-pq.top();
        pq.pop();
        sum+=x+y;
        pq.push(-(x+y));
    }
    pq.pop();
    cout<<sum<<endl;
}
}
