#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int arr[n+5],even=0,odd=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(i%2==0 && arr[i]%2!=0)
        {
            even++;
        }
        else if(i%2==1 && arr[i]%2!=1)
        {
            odd++;
        }
    }
    if(even==odd){
        cout<<even<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}

int main()
{
    int x,t;
    cin>>t;
    while(t--){
    solve();
    }
}

