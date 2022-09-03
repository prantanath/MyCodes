//Author:  Pranta
//Date:    2022-Sep-03
//Problem: bitwise_sieve
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define inp(a,n) ({ fr(i,0,n)cin>>a[i]; })
#define fr(i,a,n) for(int i=a;i<n;++i)
#define rfr(i,a,n) for(int i=n-1;i>=a;--i)
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define all(a) (a).begin(),(a).end()
#define pr(a) cout<<a<<"\n"
#define sz(a) a.size();
#define ld long double
#define ll long long
#define pb push_back
const ld PI = 3.141592653589793238462;
const ll MOD = 1000000007;
const ll INF = 1e18;
using namespace std;
bitset<1000000>flag;
vector<int>primes;
void sieve(int n)
{
    flag.set();
    flag[0]=flag[1]=0;
    int finalBit = sqrt(flag.size()) + 1;

	// Perform sieve of Eratosthenes
	for(int i = 2; i < finalBit; ++i){
		if(flag.test(i)){
			for(int j = 2*i; j < n; j+=i)flag.reset(j);
        }
	}
    for(int i = 2; i < n; i++)
		if(flag.test(i))primes.push_back(i);
}
void solve()
{
    int n;
    cin>>n;
    sieve(n);
    for(auto x:primes) cout<<x<<" ";
}
int main()
{
    fast;
    int t=1;
    // cin>>t;
    while(t--)
    solve();
}