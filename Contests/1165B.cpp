#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    multiset<int>s;
    cin>>n;
    int arr[n+5],pos=1;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    for(auto it=s.begin();it!=s.end();++it){
        if(*it>=pos){
            pos++;
        }
    }
    cout<<pos-1<<endl;

}
