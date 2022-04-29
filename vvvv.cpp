#include<bits/stdc++.h>
using namespace std;
#define size_n 1000000
#define size_p 1000000
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
    int tot=sieve();
    long long n,x;

    cin>>n;
    while(n--){
        bool f=false;
        cin>>x;
        int sq=sqrt(x);
        cout<<sq;
        if(sq*sq==x){
        if(flag[sq]){
            f=true;
        }
        }
    if(x!=4 && x%2==0){
        cout<<"NO"<<endl;}
    else if(f==true){
    cout<<"YES"<<endl;}
    else
        cout<<"NO"<<endl;
}
}
