#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
bool isMathced(string s, string s1)
{
    int j=0;
    for(int i=0;i<s1.length()&&j<s.length();++i)
    {
        if(s[j]==s1[i])
        {
            j++;
        }
    }
    if(j==s.length()) return true;
    else return false;
}
void solve()
{
    string s,s1;
    while(cin>>s>>s1)
    {
        cout<<(isMathced(s,s1)?"Yes":"No")<<endl;
    }
}

int main()
{
    fast;
    int t;
    solve();
}
