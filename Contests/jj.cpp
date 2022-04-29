
#include <bits/stdc++.h>
#define ll long long

using namespace std;
void mrgsort(ll arr[],ll n);ll cnt=0;
void merger(ll arr[],ll rht[],ll rhtSz,ll lft[],ll lftSz);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll n,x;
    scanf("%lld%lld",&n,&x);
    ll arr[n];
    for(ll i=0;i<n;++i) scanf("%lld",&arr[i]);
    mrgsort(arr,n);
    map<ll,ll>mp;
    for(ll i=0;i<n;++i){
        mp[arr[i]]++;
    }
    for(ll i=0;i<n;++i){
        cnt+=mp[x-arr[i]];
    }
    printf("%lld",cnt);
}
void mrgsort(ll arr[],ll n){
    if(n==1) return;
    ll lftSz=n/2;
    ll rhtSz=n-lftSz;
    ll lft[lftSz];
    ll rht[rhtSz];
    for(ll i=0;i<lftSz;++i) lft[i]=arr[i];
    for(ll i=lftSz;i<n;++i) rht[i-lftSz]=arr[i];
    mrgsort(lft, lftSz);
    mrgsort(rht, rhtSz);
    merger(arr,rht,rhtSz,lft,lftSz);
}
void merger(ll arr[],ll rht[],ll rhtSz,ll lft[],ll lftSz){
    ll it=0,it1=0,it2=0;
    while(it<lftSz&&it1<rhtSz){
        if(lft[it]<rht[it1]){
            arr[it2]=lft[it];
            it++;
            it2++;
        }
        else{
            arr[it2]=rht[it1];
            it2++;
            it1++;
        }
    }
    while(it1<rhtSz){
        arr[it2]=rht[it1];
        it1++;
        it2++;
    }
    while(it<lftSz){
        arr[it2]=lft[it];
        it++;
        it2++;
    }
}


