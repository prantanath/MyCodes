#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int k;
    bool flag=true;
    string s;
    cin>>k>>s;
    vector<char>v,v2;
    map<char,int>mp;
    for(int i=0;i<s.length();++i){
        mp[s[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();++it){
        if(it->second%k!=0){
            flag=false;
            break;
        }
        else
            //v2.pb(it->second);
            for(int i=0;i<it->second/k;++i)
            v.pb(it->first);
    }
   // sort(v.begin(),v.end());
    if(flag){
    for(int i=0;i<k;++i){
     for(int j=0;j<v.size();++j){
            //for(int k=0;k<v2[j];++k)
                cout<<v[j];
    }
    }
    }
    else
        cout<<-1;
}
