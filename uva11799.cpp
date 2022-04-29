#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,a[101],c=0;
    cin>>t;
    while(t--){
       // int a[n];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
      int *max = max_element(a,a+n);
        cout<<"Case "<<++c<<": "<<*max<<endl;
    }
}

