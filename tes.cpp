
#include <bits/stdc++.h>
using namespace std;
long long nCr(int n, int r)
{

    long long p = 1, k = 1;


    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);


            p /= m;
            k /= m;

            n--;
            r--;
        }
    }

    else
        p = 1;
    return p;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>n>>x;
        double crctAns=(double)(n*x)/100.0;
        int z= (int)crctAns;
        if(crctAns>z) z++;
        double sum=0,fc=pow(0.5,n);
        for(int i=z; i<=n; ++i)
        {
            int z=nCr(n,i);
            //cout<<z<<endl;
            sum+=(z*fc);
        }
        cout<<fixed<<setprecision(2)<<sum<<endl;
    }
}
