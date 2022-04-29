#include<bits/stdc++.h>
using namespace std;

#define size_n 100000000
#define size_p 100000000
bool flag[size_n+5];
int primes[size_p+5];

int sieve(){
    int i,j,val,total=1;
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
    int tot=sieve();
    //cout<<"Total primes :"<<tot<<endl;
    int t;
    cin>>t;
    while(t--){
    for(int i=1;i<=tot;i++){
            if(i%100==1){
        cout<<primes[i]<<endl;
            }
    }
    }
}

