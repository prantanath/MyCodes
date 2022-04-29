#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k,mov=0,cnt=0;
    cin>>n>>k;
    string s;
    cin>>s;
    int start=0,endd=1,pos,pos2;
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
        mov=0;
    }
    while(endd<n)
    {
        if(v[endd]==1)
        {
            if(endd-mov-k<=0)
            {
                cnt--;
            }
            mov=endd;
        }
            else
            {
                if(endd-mov-k>0){
                cnt++;
                }
            }
            mov=endd;
            endd++;

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


