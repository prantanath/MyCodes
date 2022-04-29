#include<bits/stdc++.h>
using namespace std;
int bubble(int n){
    int a[n],cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>0;j--)
            if(a[j]<a[j-1])
        {
            swap (a[j],a[j-1]);
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
            if(i>0){
                cout<<" ";
            }
        cout<<a[i];
    }
    cout<<endl;
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    int x=bubble(n);
   /* for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;*/
    cout<<x<<endl;

}

