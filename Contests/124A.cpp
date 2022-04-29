#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if(n-1<=a+b)
    cout<<n-a;
    else
        cout<<b+1;
}
