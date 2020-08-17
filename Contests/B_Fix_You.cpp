//Author:  Pranta
//Date:    2020-Aug-09
//Problem: B_Fix_You
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int row,col;
    cin>>row>>col;
    char arr[row+1][col+1];
    for(int i=1;i<=row;++i){
        for(int j=1;j<=col;++j){
            cin>>arr[i][j];
        }
    }
    //cout<<arr[0][0];
    int cnt = 0;
    for(int i=1;i<=row;++i){
        for(int j=1;j<=col;++j){
            if(j==col and i<row){
                if(arr[i][j]=='R')
                cnt++;
            }
            if(i==row and j!=col){
                if(arr[i][j]=='D'){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<"\n";

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}