
#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int dp[100][100];
int f(int p1,int p2){
    if(s1[p1]==0) return s2.size()-p2;
    if(s2[p2]==0) return s1.size()-p1;
    if(s1[p1]==s2[p2]) return f(p1+1,p2+1);
    int opIns=1+f(p1,p2+1);
    int opDel=1+f(p1+1,p2);
    int opRep=1+f(p1+1,p2+1);
    int opSwp=1+f(p1+2,p2+2);
    int mn = min(min(opIns,opDel),min(opRep,opSwp));
    return dp[p1][p2]=mn;

}
int main(){
    cin>>s1>>s2;
    for(int i=0;i<s1.size();++i){
        for(int j=0;j<s2.size();++j) dp[i][j]=-1;
    }
    cout<<f(0,0)<<endl;
    for(int i=0;i<s1.size();++i){
        for(int j=0;j<s2.size();++j)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
