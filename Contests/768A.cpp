#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int mn = *min_element(v.begin(),v.end());
    int mx = *max_element(v.begin(),v.end());
    for(int i=0;i<v.size();++i){
        if(mn<v[i] && v[i]<mx )
            cnt++;
    }
    cout<<cnt;
}
