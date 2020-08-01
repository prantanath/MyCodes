//author:Pranta
//date: "2020-08-01"
#include <bits/stdc++.h>
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n, r, sum = 0;
    cin >> n >> r;
    if (r < n)
    {
        cout << (r * (r + 1)) / 2 << endl;
    }
    else
    {
        n -= 1;
        sum = (n * (n + 1)) / 2;
        cout << sum + 1 << endl;
    }
    //cout<<sum<<endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
        solve();
}