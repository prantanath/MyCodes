#define MAX 1000000007
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,i,j;

    scanf("%d",&t);
    while (t--){
            long long int temp=0,c=0,x,temp1=0;
        scanf("%d",&n);
         long long int a[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        sort(a,a+n,greater<long long int>());
            for(int i=0;i<n;i++){
            if(a[i]!=0){
            x=a[i]-c;
            if(x>0)
            temp1+=x;
            c++;}
            else{
                temp1+=a[i];
            }
            //printf("%d ",temp1);
        }
    printf("%lld\n",temp1%MAX);
    }
    return 0;
}
