#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define size_n 1000000
#define size_p 1000000
bool flag[size_n+5];
int primes[size_p+5];

int sieve(){
    ll i,j,val,total=0;
    for(i=2;i<=size_n;i++){
        flag[i]=1;
    }
    val=sqrt(size_n)+1;
    for(i=2;i<=val;i++){
        if(flag[i]==1)
        for(j=i;j*i<=size_n;j++){
            flag[i*j]=0;
        }
    }
    for(i=2;i<=size_n;i++){
        if(flag[i]){
            primes[total++]=i;
        }
    }
    return total;
}

int main(){
    ll tot=sieve();
    ll t,x,s=0;
    cin>>t;
    while(t--){
            s=0;
            cin>>x;
    //cout<<"Total primes :"<<tot<<endl;
    for(int i=0;i<tot;i++){
        if (primes[i]<=x)
           // cout<<primes[i];
            s+=primes[i];
    }
    cout<<s<<endl;
    }
}

