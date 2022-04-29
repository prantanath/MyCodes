#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool value(ll x)
{
    if(x>0) return 1;
    else return 0;
}
void solve()
{
   ll n;
   cin>>n;
   ll arr[n+5];
   for(int i=0;i<n;++i)
   {
       cin>>arr[i];
   }
   ll positive=0,stop=0,max_sum=0;
   for(int i=0;i<n;++i){
        stop=i;
        positive=INT_MIN;
        while(stop<n and value(arr[i])==value(arr[stop])){
            positive=max(positive,arr[stop]);
            stop++;
        }
        i=stop-1;
//        cout<<i<<endl;
//        cout<<positive<<endl;

        max_sum+=positive;
   }
   cout<<max_sum<<endl;
}

int main()
{
    int x,t;
    cin>>t;
    while(t--){
    solve();
    }
}


