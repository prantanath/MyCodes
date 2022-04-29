#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
int main()
{
    int s,n,x,y;
    bool flag=true;
    cin>>s>>n;
    vector<pair<int,int>> dragon;
    for(int i=0;i<n;i++){
        cin >>x>>y;
        dragon.pb(mp(x,y));
    }
    sort(dragon.begin(),dragon.end());
    for(int i=0;i<n;i++){
        if(s>dragon[i].first){
            s+=dragon[i].second;
        }
        else{
            flag=false;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
