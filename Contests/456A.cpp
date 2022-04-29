#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m;
    bool flag=false;
    cin>>n;
    vector<pair<int,int> >pr;
    int arr[n+5],brr[n+5];
    for(int i=0;i<n;++i){
        cin>>arr[i]>>brr[i];
        pr.push_back(make_pair(arr[i],brr[i]));
    }
    sort(pr.begin(),pr.end());
    for(int i=1;i<pr.size();++i){
        if(pr[i].first>pr[i-1].first && pr[i].second<pr[i-1].second){
            i++;
            flag=true;
        }
    }
    if(flag){
        cout<<"Happy Alex";
    }
    else
        cout<<"Poor Alex";
}


