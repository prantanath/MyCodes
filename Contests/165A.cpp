#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n],cnt=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<2;++j){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        int x=a[i][0];
        int y=a[i][1];
        int r=0,l=0,lo=0,u=0;
        for(int j=0;j<n;++j){
            if(x<a[j][0] && y==a[j][1]){
                r++;
            }
            else if(x>a[j][0] && y==a[j][1]){
                l++;
            }
            else if(x==a[j][0] && y>a[j][1]){
                lo++;
            }
            else if(x==a[j][0] && y<a[j][1]){
                u++;
            }
            if(r>0&&l>0&&lo>0&&u>0){
                if(r+l+lo+u>=4){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;
}
