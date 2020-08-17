//Author:  Pranta
//Date:    2020-Aug-16
//Problem: A_Omkar_and_Password
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,cnt=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;++i){
        if(arr[i]==arr[i+1]){
            cnt++;
        }
    }
    //cout<<cnt<<endl;
    if(cnt+1==n) cout<<n<<endl;
    else cout<<1<<endl;

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}