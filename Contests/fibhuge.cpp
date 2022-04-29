#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
long long solve(long long n, long long m) {
    if (n <= 1)
        return n;
    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;
    }

    return current % m;
}

int main()
{
    fast;
    int t;
    ll n,m;
    cin>>n>>m;
    cout<<solve(n,m)<<endl;
}





