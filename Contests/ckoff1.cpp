#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--){
        map<int,int>mp;
        map<int,int> :: iterator it;
        vector<int>v;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;++i){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        for(it=mp.begin();it!=mp.end();it++){
            v.push_back(it->second);
        }
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();++i){
            if(v[i]==v[i-1])
                flag=false;
                break;
        }

    }
}

