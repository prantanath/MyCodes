#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,x,t,t1;
    cin>>n>>m>>a>>b;
        t=(n/m)*b+(n%m)*a;
        x=n*a;
        t1=(n/m)*b+b;

        //if more than two hv to use {}
            cout<<min({x,t,t1})<<endl;

}
