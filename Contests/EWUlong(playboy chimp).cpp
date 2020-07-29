#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int n,q;
    cin>>n;
    vector<int>v(n);
    vector<int>:: iterator l,u;
    for(int i=0;i<n;++i)
    {
        cin>>v[i];
    }
    cin>>q;
    int query[q+5];
    for(int i=0;i<q;++i)
    {
        cin>>query[i];
        l=lower_bound(v.begin(),v.end(),query[i]);
        u=upper_bound(v.begin(),v.end(),query[i]);
        if(l-v.begin()==0)
            cout<<"X ";
        else
            cout<<*--l<<' ';
        if(u-v.begin()==n)
            cout<<"X"<<endl;
        else
            cout<<*u<<endl;

    }

}

int main()
{
    fast;
    int t;
    solve();
}
