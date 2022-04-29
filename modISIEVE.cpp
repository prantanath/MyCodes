#include<bits/stdc++.h>
using namespace std;

#define size_n 10000
#define size_p 10000
bool flag[size_n+5];
int primes[size_p+5];

int sieve(){
    int i,j,val,total=0;
    for(i=2;i<=size_n;i++){
        flag[i]=true;
    }
    val=sqrt(size_n)+1;
    for(i=2;i<=val;i++){
        if(flag[i]==true){
        for(j=i*i;j<=size_n;j+=i){
            flag[j]=false;
        }
        primes[total++]=i;
    }
    return total;
}
}

int main(){
    int tot=sieve();
    cout<<"Total primes :"<<tot<<endl;
    for(int i=0;i<tot;i++){
        cout<<primes[i]<<" ";
    }
}
