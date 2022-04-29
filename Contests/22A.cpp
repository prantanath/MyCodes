#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    set<int>stat;
    for(int i=0;i<n;++i){
        cin>>a;
        stat.insert(a);
    }
    //iterate through set by index
    if(stat.size()<2)
        cout<<"NO";
    else{
    int x = *next(stat.begin(), 1);
    cout<<x;}
}
