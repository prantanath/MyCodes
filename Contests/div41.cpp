#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        cin>>n;
        int x=10;
        while(n){
            if(n%x!=0){
                v.push_back(n%x);
                n-=(n%x);
            }
            x*=10;
    }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++ ){
            cout<<v[i]<<" ";
    }
    cout<<endl;
}
}
