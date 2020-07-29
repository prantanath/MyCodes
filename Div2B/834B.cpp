#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,k,cnt=0;
    cin>>n>>k;
    string s,s1;
    cin>>s;
    map<char,int>pos;
    unordered_set<char>us;
    bool ok =true;
    for(int i=0;i<n;++i)
    {
        pos[s[i]]=i;
    }
    for(int i=0;i<n;++i)
    {
        us.insert(s[i]);
        if(us.size()>k)
        {
            ok=false;
            break;
        }
        else
        {
            if(pos[s[i]]==i)
            {
                us.erase(s[i]);
            }
        }
    }
    if(ok)
    {cout<<"NO"<<endl;}
    else cout<<"YES"<<endl;

}

int main()
{
    fast;
    int t;
    solve();
}
