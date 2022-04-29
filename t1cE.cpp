#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0,max=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=100;i++)
    {
        c=0;
        for(j=0;j<n;j++){
        if(i==a[j]){
            c++;
        }
        }
        if(c>max)
            max=c;
    }
    cout<<max;
}
