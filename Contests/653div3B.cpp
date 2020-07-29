#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,cnt=0;
    cin>>n;
    while(n!=1)
    {
        if(n%6==0)
        {
            n/=6;
            cnt++;
        }
        else
        {
            n*=2;
            if(n%6==0)
            {
                cnt++;
                continue;
            }

            else
            {
                cnt=-1;
                break;
            }

        }
    }
    cout<<cnt<<endl;

}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}

