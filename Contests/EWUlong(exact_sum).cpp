
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n)
    {
        int arr[n+5];
        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
        }
        cin>>m;
        sort(arr,arr+n,greater<int>());
        int start=0,ennd=n-1,Book1,Book2,dif=INT_MAX;
        while(start<ennd)
        {
            if(arr[start]+arr[ennd]==m)
            {
                if(abs(start-ennd)<dif)
                {
                    dif=abs(start-ennd);
                    Book1=ennd;
                    Book2=start;
                }
                ++start;
                --ennd;
            }
            else if(arr[start]+arr[ennd]>m)
            {
                ++start;
            }
            else
            {
                --ennd;
            }
        }
//        cout<<Book1<<' '<<Book2<<endl;
        cout<<"Peter should buy books whose prices are "<<arr[Book1]<<" and "<<arr[Book2]<<"."<<endl<<endl;
    }
}

int main()
{
    fast;
    int t;
    solve();
}
