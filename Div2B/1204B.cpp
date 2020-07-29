#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n,l,r,min_sum=0,max_sum=0;
    cin>>n>>l>>r;
    for(int i=0;i<l;++i)
    {
        min_sum+=pow(2,i);
    }
    max_sum=min_sum;
    min_sum+=((n-l)*1);
    for(int i=l;i<r;++i)
    {
        max_sum+=pow(2,i);
    }
    for(int i=0;i<n-r;++i)
    {
        max_sum+=pow(2,r-1);
    }
    cout<<min_sum<<" "<<max_sum;
}

int main()
{
    int x,t;  solve();

}


