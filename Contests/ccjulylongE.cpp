#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,cnt=0;
    cin>>n;
    ll arr[n+5],brr[n+5];
    map<ll,ll>a,b;
    vector<ll>v,v1;
    queue<ll>q,q1;
    for(int i=0;i<n;++i) cin>>arr[i];
    for(int i=0;i<n;++i) cin>>brr[i];
    sort(arr,arr+n);
    sort(brr,brr+n);
    for(int i=0;i<n;++i)
    {
        if(arr[i]!=brr[i]){
        a[arr[i]]++;
        b[brr[i]]++;
        cnt++;
//        v[cnt]=arr[i];
//        v1[cnt]=brr[i];
        }
        else{
            v.push_back(arr[i]);
            v1.push_back(brr[i]);
        }
    }
//    cout<<cnt<<endl;
    ll cost=0;
    for(auto it=a.begin();it!=a.end();++it)
    {
        if(it->second%2==0)
        {
            v.push_back(it->first);
            for(int i=0;i<it->second/2;++i){
                q.push(it->first);
            }
        }
    }
for(auto it=b.begin();it!=b.end();++it)
    {
        if(it->second%2==0)
        {
            v1.push_back(it->first);
            for(int i=0;i<it->second/2;++i){
                q1.push(it->first);
            }
        }
    }
    /*cout<<q.size()<<' '<<q1.size()<<endl;
    for(int i=0;i<q.size();++i)
    {
        cout<<q.front()<<' '<<endl;
        cout<<q1.front()<<' '<<endl;
        q.pop();
        q1.pop();

    }*/
    if(cnt==0)
    {
        cout<<0<<endl;
    }
    else if(q.empty()||q1.empty() or q.size()!=q1.size())
    {
        if(cnt>=1)
        cout<<-1<<endl;
    }
    else if(q.size()==q1.size() and cnt>0)
    {
        while(!q.empty()){
        //cost+=min(v[i],v1[i]);
        cost+=min(q.front(),q1.front());
        v.push_back(q1.front());
        v1.push_back(q.front());
        q.pop();q1.pop();}
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        if(v==v1 and v.size()==n)
        cout<<cost<<endl;
        else
            cout<<-1<<endl;
    }
    /*for(auto x:v) cout<<x<<' ';
    cout<<endl;
    for(auto x:v1) cout<<x<<' ';*/




}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
