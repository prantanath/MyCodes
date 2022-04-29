#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,m;
    vector<int>v;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    cin>>m;
    int brr[m];
    for(int i=0;i<m;++i)
        cin>>brr[i];
   // int x=min(n,m);
    for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
            if(brr[i]%arr[j]==0){
            v.push_back(brr[i]/arr[j]);
        }
    }
    }
    int z= *max_element(v.begin(),v.end()),c=0;
    for(int i=0;i<v.size();++i){
        if(v[i]==z)
            c++;
    }
    cout<<c<<endl;
}

