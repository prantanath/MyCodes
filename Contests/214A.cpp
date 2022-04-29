#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    int z=min(n,m);
    for(int i=0;i<=z;++i){
        for(int j=0;j<=z;++j){
            if(i*i+j==n && j*j+i==m)
                cnt++;
        }
    }
    cout<<cnt;
}



