#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int price[1005];

int rodCut(int len);
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>price[i];
        dp[i]=-1;
    }
    printf("%d ",rodCut(5));
}

int rodCut(int len){
    if(len==0) return 0;
    if(dp[len]!=-1) return dp[len];
    int mx=INT_MIN,x;
    for(int i=1;i<=len;++i){
        mx=max(mx,price[i]+rodCut(len-i));
    }
    return dp[len]=mx;
}
