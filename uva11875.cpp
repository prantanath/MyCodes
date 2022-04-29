#include<iostream>
using namespace std;
int main()
{
    int t,n,x,c=0;
    cin>>t;
    int a[101];
    while(t--){
            cin>>n;
            c++;
            x=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        x=n/2+(n%2);
        cout<<"Case "<<c<<": "<<a[x]<<"\n";
    }
}
