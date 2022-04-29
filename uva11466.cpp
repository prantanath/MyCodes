#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define size_n 1000000
#define size_p 1000000
bool flag[size_n+5];
int primes[size_p+5];

void sieve(){
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
}

int main(){
    sieve();
    ll t,x,s=0,mx,temp=0;
    while(cin>>x){
            x=abs(x);
            s=0;
            if(x==0){
                break;}
    //cout<<"Total primes :"<<tot<<endl;
    for(ll i=0;i<x;i++){
        if(x%primes[i]==0){
            s++;
        }
        while(x%primes[i]==0)
        {
            x/=primes[i];
            temp=primes[i];
           // cout<<primes[i];
        }
}
//cout<<s;
if(s>1)
    cout<<temp<<endl;
else
    cout<<"-1"<<endl;


}
}


