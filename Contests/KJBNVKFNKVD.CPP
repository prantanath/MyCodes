//Author:  Pranta
//Date:    2020-Sep-08
//Problem: B_Big_Vova
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;

void sortArr()
{

}
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>a,z;
    for(int i=0; i<n; ++i) cin>>v[i];
    int mx=*max_element(v.begin(),v.end());
    int k=mx;
    //a.push_back(mx);
    for(int i=0; i<n; ++i)
    {

        int z=__gcd(mx,v[i]);
        mx=z;
        a.push_back(z);

    }
    vector<pair<int, int> > vp;

    for (int i = 0; i < a.size(); ++i)
    {
        vp.push_back(make_pair(a[i], i));
    }

    sort(vp.begin(), vp.end());
    reverse(vp.begin(),vp.end());

    //vp.clear();
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(vp[i].second==vp[j].second){
                if(vp[j].first>vp[i].first){
                    swap(vp[i],vp[j]);
                }
            }
        }
    }
    cout<<k<<' ';
    for(int i=0; i<n; ++i)
    {
        if(v[vp[i].second]!=mx){
            //cout<<vp[i].second<<' ';
            //cout<<endl;

            cout<<v[vp[i].second]<<' ';
        }
        //cout<<endl;
    }

    cout<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
        solve();
}
