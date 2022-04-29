#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    for(int i=1;i<n;i++){
        sum+=i;
    }
    for(int i=1;i<m;i++){
        sum+=i;
    }
    cout<<sum<<endl;
}



