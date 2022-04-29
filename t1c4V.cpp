#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int> v(n);
   vector <int> ::iterator low,up;
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int q;
   cin>>q;
   while(q--){
    int k;
    cin>>k;
    low = lower_bound(v.begin(),v.end(),k);
    up = upper_bound(v.begin(),v.end(),k);
    cout<<low-v.begin()<<" "<<up-v.begin()<<endl;
   }

}


