#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y;
    cin>>n>>m;
    set<int> bulb;
    bool flag=true;
    while(n--)
    {
        cin>>x;
        int a[x],c=0;
        for(int i=0;i<x;i++){
            cin>>y;
            bulb.insert(y);
        }
    }
    if(bulb.size()==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
