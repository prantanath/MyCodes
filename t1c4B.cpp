#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
            int sum=0;
        for(int j=0;j<c;j++){
            if(j>0){
                cout<<" ";
            }
            cout<<a[i][j];
            sum+=a[i][j];
        }
        cout<<" "<<sum<<endl;
        }
    int t[c][r];
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            t[j][i]=a[i][j];
        }
     }
     int st=0;
     for(int i=0;i<c;i++){
            int sum2=0;
        for(int j=0;j<r;j++){
            sum2+=t[i][j];
        }
        st+=sum2;
        if(i>0){
            cout<<" ";
        }
        cout<<sum2;
     }
     cout<<" "<<st<<endl;
}

