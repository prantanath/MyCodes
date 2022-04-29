#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5],sum=0,min=0,n=3;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector <int> v;
    for(int i=0;i<n;i++){
            sum=0;
        for(int j=0;j<n;j++){
            sum+=abs(a[i]-a[j]);}
            v.push_back(sum);
            /*cout<<sum<<endl;
            if(sum<min){
                min=sum;
            }*/
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<endl;
}

