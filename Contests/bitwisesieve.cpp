#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int prime[MAX/32];
bool check(int n,int pos){ return n & (1<<pos);}
int Set(int n, int pos){return n | (1<<pos) ;}
void sieve(int n)
{
   // int n=MAX,c=1;
    int sqr=sqrt(n);
    for(int i=3;i<=sqr;i+=2){
        if(check(prime[i/32],i%32)==0)
        {
            for(int j=i*i;j<=n;j+=2*i)
            {
                prime[j/32]=Set(prime[j/32] ,j%32);
            }
        }
    }
    cout<<2<<endl;
    for(int i=3;i<=n;i++){
        if(check(prime[i/32],i%32)==0){

            cout<<i<<endl;

        }
    }

}
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    sieve(n);
    }
}
