#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,p;
    double sum=0,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
        sum+=p;
        }
    ans = sum/(double)n;
    cout<<ans<<endl;
}




