#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int v[n],p[m];
    for(int i=0;i<n;++i) cin>>v[i];
    for(int i=0;i<m;++i) cin>>p[i];
    sort(v,v+n);
    sort(p,p+n);
    int z=0,i=0,j=0;
    //if(n<m) z=n;
    while(i<n&&j<m){
        if(v[i]<=p[j]){
            z++;
            i++;j++;
        }
        else j++;
    }
    cout<<z<<endl;
}
