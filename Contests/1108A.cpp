#include<bits/stdc++.h>
using namespace std;
int main()
{
   int l1,l2,r1,r2,q;
   cin>>q;
   while(q--){
   cin>>l1>>r1>>l2>>r2;
   if(l1!=r2){
    cout<<l1<<" "<<r2<<endl;
   }
   else
    cout<<r1<<" "<<l2<<endl;
   }
}
