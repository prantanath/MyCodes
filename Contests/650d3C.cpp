#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,mov=0,cnt=0;
    cin>>n>>k;
    string s;
    cin>>s;
    int start=0,endd=1,pos=0,pos2;
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        v.push_back(s[i]-'0');
    }
    /*for(auto x:v){
        cout<<x<<" ";
    }*/
    if(!v[0])
    {
        cnt++;
    }
    for(int i=1;i<n;++i)
    {
        if(v[i]==1)
        {
            if(i-pos<=k)
            {
                cnt--;

            }pos=i;
        }
        else
        {
            if(i-pos>k)
            {
                cnt++;
                pos=i;
            }
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int x,t;
    cin>>t;
    while(t--){
    solve();
    }
}


