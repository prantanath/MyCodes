#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,cnt;
    cin>>n;
    int x;
    vector <int> v;
    vector <int> ::iterator up;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cin>>q;
    int m;
    for(int i=0;i<q;i++){
        cin>>m;
        up = upper_bound(v.begin(),v.end(),m);
        cout<< up-v.begin()<<endl;
    }
    /*int c=0,k=0;
    while(q--){
            cnt=0;
    for(int i=0;i<n;i++){
            if(m[q]>=x[i]){
                cnt++;
            }
           // k++;
        }
            v.push_back(cnt);
     //cout<<cnt<<endl;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;*/
    }





