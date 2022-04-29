#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
   string s;
   cin>>s;
   for(int i=1;i<n;++i)
   {
        while(stop<n)
        {
            if(s[stop]=='1')
            {
                stop++;
            }
            else break;
        }
        if(s[stop+1]=='2' and s[i]=='3') ans+=(stop-i);

   }
}

int main()
{
    int x,t;
    cin>>t;
    while(t--){
    solve();
    }
}



