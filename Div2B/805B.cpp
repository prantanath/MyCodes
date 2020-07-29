#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,c=0;
    string s="aabb";
    cin>>n;
    while(n--)
    {
        printf("%c",s[c]);
        c++;
        if(c==4){
            c-=4;
        }
    }
}

int main()
{
    fast;
    int t;
    solve();
}
