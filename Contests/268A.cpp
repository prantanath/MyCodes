#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h[101],a[101],cnt=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>h[i]>>a[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t;j++){
            if(h[i]==a[j])
            cnt++;}
    }
    cout<<cnt<<endl;
}




