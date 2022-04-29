#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    vector<int>v(n);
    vector<int> :: iterator up,low;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>q;
    int b[q];
//    for(int i=0;i<q;i++){
//        cin>>b[i];
//    }
    for(int i=0;i<q;i++){
        cin>>b[i];
       low = lower_bound(v.begin(),v.end(),b[i]);
       up = upper_bound(v.begin(),v.end(),b[i]);
//        cout<<low-v.begin()<<" "<<up-v.begin()<<endl;
       if(low- v.begin()==0)
       {
           cout<<"X ";
       }
       else{
        cout<<*--low<<" ";
       }
       if(up-v.begin()==n){
        cout<<"X"<<endl;
       }
       else{
        cout<<*up<<endl;
       }
    }

}
