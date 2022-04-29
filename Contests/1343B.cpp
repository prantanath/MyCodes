#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n,t;

    cin>>t;
    while(t--){
    cin>>n;
    vector<int> v;
    if((n/2)%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    int x=2,sum=0,s=0;
    for(int i=1;i<=n/2;i++){
        v.pb(x);
        sum+=x;
        x+=2;
    }
    //cout<<sum<<endl;
    int y=1;
    for(int i=1;i<=n/2-1;i++){
        v.pb(y);
        //cout<<y<<endl;
        s+=y;
        y+=2;

    }
    //cout<<s<<endl;
    v.pb(sum-s);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
}
}
