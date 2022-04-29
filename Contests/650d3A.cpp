#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s,s1="";
    cin>>s;
    int n=s.length();
    s1+=s[0];
    for(int i=1;i<n-1;i++)
    {
        if(i%2==1)
        {
            s1+=s[i];
        }
    }
    s1+=s[n-1];
    cout<<s1<<endl;
}

int main()
{
    int x,t;
    cin>>t;
    while(t--){
    solve();
    }
}
