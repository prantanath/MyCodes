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
            b[c]=i;
        }
    }
    for(i=n;i>2;i--){
        if(a[i]==1 && a[i-1]==0 && a[i-2]==1){
            c++;
            b[c]=i;
        }

    }
    //cout<<c;
    for(i=1;i<=c;i++){
        for(j=i+1;j<=c;j++)
            if(b[i]==b[j]){
            b[j]=0;
            }
}
sort(b,b+(c+1));
    for(i=c;i>1;i--){
        if(b[i]-b[i-1]<2)
           d++;
    }
   // if(d%2==1)
    cout<<d+1;
    //else
      //  cout<<
}
