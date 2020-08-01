#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,pos=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        if(arr[i]==1){
            pos++;
        }
        else break;
    }
    if(pos==n and n%2==0) {
        cout<<"Second"<<"\n";
        return;
    }
    else{
        if(pos%2 and pos!=n) {
            cout<<"Second"<<"\n";
            return;
        }
        cout<<"First"<<"\n";
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

