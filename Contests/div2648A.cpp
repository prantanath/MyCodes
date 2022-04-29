#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
               if(arr[i][j]==1){
                    arr[i][j]=2;
                for(int k=0;k<n;++k){
                    if(arr[k][j]==0)
                    arr[k][j]=2;
                }
                for(int k=0;k<m;++k){
                    if(arr[i][k]==0)
                    arr[i][k]=2;
                }

               }
            }
        }
        int c=0,i,j;

        for(i=0;i<n;++i){
            for(j=0;j<m;++j){
                if(arr[i][j]==0){
                    c++;
                    for(int k=0;k<n;++k){
                        arr[k][j]=2;
                        }
                    for(int l=0;l<m;++l){
                        arr[i][l]=2;
                        }
                }
                }
            }

        cout<<c<<endl;
        if(c==0){
            cout<<"Vivek"<<endl;
        }
        else if(c%2==1){
            cout<<"Ashish"<<endl;
        }
        else
            cout<<"Vivek"<<endl;
    }
}
