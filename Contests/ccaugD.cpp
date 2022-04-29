//Author:  Pranta
//Date:    2020-Aug-11
//Problem: Smallest_KMP
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{

    string a,b;
    cin>>a>>b;
    char first=b[0];
    int c=0,i=0,j=0;
    string  t=b;
    sort(a.begin(),a.end());
    sort(t.begin(),t.end());
   // cout<<a<<endl<<t<<endl;
    while (j!=t.size() and i<a.size())
    {
        if(a[i]==t[j]){
            a.erase(i,1);
            c++;
            j++;i--;
           // cout<<"helllo"<<endl;
        }
        i++;
    }
    //cout<<a<<endl;
    int cnt=0;
    for (int i = 0; i <a.size(); i++)
    {
        if(a[i]==first and a[i+1]>first){
            if(cnt<1){
        cnt++;
        cout<<a[i];
        cout<<b;
        continue;
        }
        }
        else if(a[i]>first and cnt<1){
            cout<<b;
            cnt++;
        }
        cout<<a[i];
        //if(a[i]<=first and a[i+1]!=first) cout<<b;
    }
    cout<<endl;



}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
