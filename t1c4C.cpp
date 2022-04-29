#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n>>x){
            map<int,int>mp;
            int a[101]={};
        if(n==0 && x==0){
            break;
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                for(int k=j+1;k<=n;k++){
                        if(i!=j && j!=k && k!=i){
                    mp[i+j+k]++;}
                }
            }
        }
        cout<<mp[x]<<endl;
    }
}
