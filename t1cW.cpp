#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,flag=0;
    double sum=0;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    double chk=sum*((double)1/(4*m));
    for(int i=0;i<n;i++){
        if(a[i]>chk){
            cnt++;
            if(cnt==m){
                flag=1;
                break;}
        }
    }
    //cout<<chk;
    if(flag)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}
