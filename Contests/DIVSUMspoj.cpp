#include<bits/stdc++.h>
using namespace std;

#define size_n 1000
#define size_p 1000
bool flag[size_n+5];
int primes[size_p+5];

int sieve(){
    int i,j,val,total=0;
    for(i=2;i<=size_n;i++)
    {
        flag[i]=1;
    }
    val=sqrt(size_n)+1;
    for(i=2;i<=val;i++)
    {
        if(flag[i]==1)
        for(j=i;j*i<=size_n;j++)
        {
            flag[i*j]=0;
        }
    }
    for(i=2;i<=size_n;i++)
    {
        if(flag[i]){
            primes[total++]=i;
        }
    }
    return total;
}

int divsum(int n){
    int val,c,p,s;
    val=sqrt(n)+1;
    int sum=1;
    for(int i=0;primes[i]<val;i++)
    {
        if(n%primes[i]==0){
            p=1;
            while(n%primes[i]==0)
            {
                n/=primes[i];
                p=p*primes[i];
            }
            p=p*primes[i];
            s=(p-1)/(primes[i]-1);
            sum=sum*s;
        }
    }
    if(n>1)
    {
        p=n*n;
        s=(p-1)/(n-1);
        sum=s*sum;
    }
    return sum;
}

int main()
{
    int n,t;
    cin>>t;
    int tot=sieve();
    while(t--)
    {
        cin>>n;
        cout<<divsum(n)-n<<endl;
    }
}


