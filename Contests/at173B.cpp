#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    map<string,int>mp;
    while(n--)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    cout<<"AC x "<<mp["AC"]<<endl<<"WA x "<<mp["WA"]<<endl<<"TLE x "<<mp["TLE"]<<endl<<"RE x "<<mp["RE"];

}

int main()
{
    fast;
    int t;
    solve();
}
