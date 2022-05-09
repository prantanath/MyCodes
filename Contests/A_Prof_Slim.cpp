//Author:  Pranta
//Date:    2022-May-06
//Problem: A_Prof_Slim
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define fr(i,a,n) for(int i=a;i<n;++i)
#define rfr(i,a,n) for(int i=n-1;i>=0;--i)
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define all(a) (a).begin(),(a).end()
#define pr(a) cout<<a<<endl 
#define sz(a) a.size();
#define ld long double
#define ll long long
#define pb push_back
const ld PI = 3.141592653589793238462;
const ll MOD = 1000000007;
const ll INF = 1e18;
using namespace std;
void solve()
{
    int n,z=0;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]<0) z++;
    }
    //4    
    for(int i=0;i<n;++i,z--) {

        if(z>0) arr[i]=abs(arr[i])*-1;
        else arr[i]=abs(arr[i]);
    }
    //vout(arr);
    if(is_sorted(all(arr))){
        puts("YES");return;
    }
    puts("NO");
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}