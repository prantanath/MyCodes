#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<char>v;
    while(n>0)
    {
        n--;
        ll rem=n%26;
        v.push_back((char)'a'+rem);
        n/=26;
    }
    reverse(v.begin(),v.end());
    for(auto c:v){
        cout<<c;
    }

}

int main()
{
    int x,t;  solve();

}



