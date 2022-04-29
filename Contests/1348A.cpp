#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v;
        int s=0,sum=0;
        for(int i=1;i<=n;i++)
        {
            v.push_back(pow(2,i));
        }
        /*for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }*/
        for(int i=0;i<(n/2)-1;i++)
        {
            s+=v[i];
        }
        for(int i=(n/2)-1;i<n-1;i++)
        {
           sum+=v[i];
        }
        cout<<s+v[n-1]-sum<<endl;
    }
}
