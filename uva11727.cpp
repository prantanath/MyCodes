#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,a[1001],c=0,i;
    cin>>t;
        while(t--){
            c++;
            for(i=0;i<3;i++){
            scanf("%d",&a[i]);
            }
        //b= sizeof(a);
        sort(a,a+3);
        cout<<"Case "<<c<<": "<<a[1]<<"\n";
    }

}
