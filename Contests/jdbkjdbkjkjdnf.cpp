//Author:  Pranta
//Date:    2021-Aug-30
//Problem: Untitled-1
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define sz(a) a.size();
#define ld long double
#define ll long long
#define pb push_back
const ld PI = 3.141592653589793238462;
const ll MOD = 1000000007;
const ll INF = 1e18;
using namespace std;
void solve(int x)
{
    ll n;
    cin>>n;
    char s[n];
    cin>>s;
    ll cnt=0,pos;
    bool swtLeft=false,swtRht=false;
    char a,b;
    for(int i=0;i<n;++i){
        if(s[i]=='X') {
            swtLeft=true;
            pos=i;
            a='O';b='X';
            break;
        }
        else if(s[i]=='O') {
            swtRht=true;
            pos=i;
            a='X';b='O';
            break;
        }
    }
    for(int i=pos;i<n;++i){
        if(s[i]==a) {
            cnt++;
            swap(a,b);
        }
    }

    cout<<"Case #"<<x<<": "<<cnt<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)solve(i);
}

