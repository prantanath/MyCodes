#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
    if(n*(a+b)<(c-d) || n*(a-b)>(c+d)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

