#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,x=0,y=0;
    cin>>n;
    int arr[n+5];
    char mark[n+5],c;
    mark[0]='f';
    for(int i=0;i<n;++i) cin>>arr[i];
    bool ok=false;
    for(int i=0;i<n;++i)
    {
        if(arr[i]==1)
        {
            x=i+1;
        }
        else
        {
            y=i+1;
            if(y>0 and y%2==0 and y<x)
            {
                ok=true;
            }
            //if(y%2==0) ok=true;
        }
    }
//    cout<<"------"<<x<<endl;
    if(x==0)
    {
        cout<<"First"<<endl;
    }
    else if(ok )
    {
        cout<<"Second"<<endl;
    }
    else cout<<"First"<<endl;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}

