#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,t;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        if(n/k>=m){
            cout<<m<<endl;
        }
        else{
                int z=n/k;
                if(m-z<=k-1){
                    cout<<z-1<<endl;
                }
                else{
                        if((m-z)%(k-1)!=0){
                          cout<<z-((m-z)/(k-1)+1)<<endl;
                        }

            //cout<<z-((m-z)/(k-1)+(k-1)/((m-z)%(k-1)))<<endl;
            else{
            cout<<z-((m-z)/(k-1))<<endl;}
        }
    }
}
}
