#include<bits/stdc++.h>
using namespace std;
#define size_n 50
#define size_p 50
bool flag[size_n+5];
int primes[size_p+5];
int sieve(){
    int i,j,val,total=0;
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
    int tot=sieve(),n,m;
    bool flag=false;
    cin>>n>>m;
    for(int i=0;i<tot;i++){
        if(primes[i]==n){
            if(primes[i+1]==m)
                flag=true;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
