#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll shop1=0,shop2=0,temp;
    temp=a*b;
    if(a>=c and temp>c){
        shop1=-1;
        shop2=b;}

    else if(temp<=c){
        shop2=-1;
        shop1=1;
    }
    else
    {
        shop1=1;
        shop2=b;
    }

    cout<<shop1<<" "<<shop2<<endl;

}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
