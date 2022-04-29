//Author:  Pranta
//Date:    2021-Jul-22
//Problem: B_Reverse_String
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    string s,t;
    cin>>s>>t;
    int pt1=0,pt2=1,pt3=1,pos=INT_MIN;
    for(int i=0;i<s.size();++i){
        if(s[i]==t[0]){
            pos=i;
            break;
        }
        else continue;
    }
    cout<<pos<<endl;
    int n = s.size();
    pt1=pos+1,pt3=pos-1;
    //cout<<pt1<<" "<<pt2;
    while(pt2<t.size()){
        if(pt1<n and s[pt1]==t[pt2]){
            pt2++;
            pt1++;
    }
    else{
        break;
    }
    }

    while(pt2<t.size()){
        if(pt3>0 and s[pt3]==t[pt2]){
            pt2++;
            pt3--;
    }
    else break;
    }
    if(pt2==t.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
