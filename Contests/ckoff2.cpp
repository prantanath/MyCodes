#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k;
    string s;
    while(t--){
        bool flag=true;
    map<char,int>mp;
    map<char,int> :: iterator it;
    cin>>s;
    for(int i=0;i<s.length();++i){
        mp[s[i]]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second%2!=0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"1"<<endl;
    }
    else
        cout<<"0"<<endl;
}
}
