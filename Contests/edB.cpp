#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,y,t;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y;
        char a[n+5][m+5];
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>a[i][j];
            }
        }
        int oo=0,oo1=0,ot=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                    if(a[i][j]=='.' && a[i][j+1]=='.' && j+1<m){
                        ot+=min(2*x,y);
                        j+=1;
                        continue;
                    }
                    else if(a[i][j]=='.'){
                    ot+=x;
                }
            }
        }
        cout<<ot<<endl;
}
}

