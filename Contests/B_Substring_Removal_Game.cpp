//Author:  Pranta
//Date:    2020-Aug-14
//Problem: B_Substring_Removal_Game
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin>>s;
    vector<int>v;
    int mx=0,cnt=0,t=0,i=0;
    bool ok=true,z=false;
   while(i<s.size()){
       if(s[i]=='1'){
           cnt++;
           ok=true;
       }
       else{
           v.push_back(cnt);
           cnt=0;
            ok=false;
       }
       i++;
   }
   v.push_back(cnt);
   sort(v.begin(),v.end(),greater<int>());
   for(int i=0;i<v.size();++i){
       if(i%2==0) mx+=v[i];
   }
   cout<<mx<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}