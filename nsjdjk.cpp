//Author:  Pranta
//Date:    2021-Jul-21
//Problem: A_Shortest_Path_with_Obstacle
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int a[2],b[2],f[2],ans=0;
    cin>>a[0]>>a[1]>>b[0]>>b[1]>>f[0]>>f[1];
    //cout<<a[0]<<b[0]<<f[0]<<endl;
    if(a[0]==b[0] || a[1]==b[1]){
        if(a[0]==b[0]){
        if(f[0]==a[0]){
            if(f[0]<max(a[1],b[1]) and f[0]>min(a[1],b[1])){
                ans = (abs(a[0]-b[0]))+(abs(a[1]-b[1]))+2;
            }
            else
            {
                ans = (abs(a[0]-b[0]))+(abs(a[1]-b[1]));
            }

        }
        else{
           ans= (abs(a[0]-b[0]))+(abs(a[1]-b[1]));
        }
        }
        else if(a[1]==b[1]){
        if(f[1]==a[1]){
            if(f[0]<max(a[0],b[0]) and f[0]>min(a[0],b[0])){
                ans = (abs(a[0]-b[0]))+(abs(a[1]-b[1]))+2;
            }
            else
            {
                ans = (abs(a[0]-b[0]))+(abs(a[1]-b[1]));
            }

        }
        else{
           ans= (abs(a[0]-b[0]))+(abs(a[1]-b[1]));
        }
    }
    }

    else{
        ans = (abs(a[0]-b[0])+abs(a[1]-b[1]));
    }
    cout<<ans<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
