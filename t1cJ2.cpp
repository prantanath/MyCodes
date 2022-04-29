#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,c=0,d=0;
    cin>>n;
    int a[n],b[101];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=1;i<=n-2;i++)
    {
        if(a[i]==1 && a[i+1]==0 && a[i+2]==1){
            c++;
            i+=2;
        }
    }
    cout<<c<<"\n";
}

