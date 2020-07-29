#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,chef=0,morty=0;
    cin>>n;
    string a,b;
    while(n--)
    {
        ll sumA=0,sumB=0;
        cin>>a>>b;
        for(int i=0;i<a.length();++i)
        {
            sumA+=a[i]-'0';
        }
        for(int i=0;i<b.length();++i)
        {
            sumB+=b[i]-'0';
        }
        if(sumA>sumB) chef++;
        else if(sumB>sumA) morty++;
        else
        {
            chef++;
            morty++;
        }
    }
    if(chef>morty) cout<<"0"<<' '<<chef<<endl;
    else if(morty>chef) cout<<"1"<<' '<<morty<<endl;
    else cout<<"2"<<' '<<chef<<endl;
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}

