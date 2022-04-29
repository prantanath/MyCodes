#include<iostream>
using namespace std;
int main()
{
    int n,k,c=0,j,i,b[101];
    cin>>n>>k;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        if(a[i]==a[j]){
           a[j]=0;
           //c++;
    }
    }
    for(i=1;i<=n;i++){
        if(a[i]!=0){
        c++;
        b[c]=i;
        /*if(c>k)
            //flag=1;
            break;
        else
        cout<<"YES\n"<<i<<" ";*/
        }
    }
    if(c>=k){
            cout<<"YES\n";
        for(i=1;i<=k;i++)
            cout<<b[i]<<" ";}
    else
        cout<<"NO\n";
}
