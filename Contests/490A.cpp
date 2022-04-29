#include<iostream>
using namespace std;
int main()
{
    int n,c=0,d=0,e=0,t1=0,t2=0,t3=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            t1=i;
            if(a[i+1]==2)
                t2=i;
                if(a[i+2]==3)
                    t3=i;
                    c++;
                    printf("%d %d %d\n",t1,t2,t3);
        }

       /* while(c!=0){
            printf("%d %d %d",t1,t2,t3);
            c=0;d=0;e=0;
            t1=0;t2=0;t3=0;
        }*/
    }
}
