#include<iostream>
using namespace std;
int main()
{
  long long  int n,sum=0;
    while(scanf("%lld",&n)==1){
        sum=0;
    for(long long int i=1;i<=n;i++){
        sum=sum+(i*i*i);
    }
    cout<<sum<<"\n";
    }
}
