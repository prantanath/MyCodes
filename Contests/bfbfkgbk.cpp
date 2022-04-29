//Author:  Pranta
//Date:    2021-Sep-28
//Problem: B_Shifting_Sort
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
void solve()
{
    int n;
    cin>>n;
    int l,r,k=0;
    vector<int>lf,rh,arr(n),tmp(n);
    for(int i=0;i<n;++i) {
        cin>>arr[i];
        tmp[i]=arr[i];
    }
    SORT(tmp);int f=0;
    while(1){
        if(tmp==arr) break;
        for(int i=0;i<n;++i)
        {
            if(arr[i]==tmp[f]){
                pos=i;
                if(i>f){
                    l=f;
                    r=pos;
                    d=pos-l;
                    k++;
                    lf.pb(l);
                    rh.pb(r);
                    for(int i=l;i<=r;++i){
                        swap(arr)
                    }
                }
            }
        }
    }
    cout<<k<<endl;
    for(int i=0;i<k;++i){
        cout<<lf[i]+1<<" "<<rh[i]+1<<" "<<1<<endl;
    }
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
