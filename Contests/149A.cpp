#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int k,mo[13],sum=0,c=0;
    bool flag=false;
    cin>>k;
    for(int i=0;i<12;++i){
        cin>>mo[i];
    }
    sort(mo,mo+12,greater<int>());
    if(k==0){
        cout<<0;
    }
    else{
    for(int i=0;i<12;++i){
        sum+=mo[i];
        c++;
        if(sum>=k){
            flag=true;
            break;
        }
    }
    if(flag)
    cout<<c;
    else
        cout<<-1;
    }
}

