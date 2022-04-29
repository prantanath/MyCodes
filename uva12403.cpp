#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int k,sum=0,cases=0;
    while(t--)
    {

        sum=0;
        int op;
        cin>>op;
        cout << "Case " <<  ++cases <<":"<< endl;
        while(op--)
        {
            string s,a="donate",b="report";
            cin>>s;
            if(s==a)
            {
                cin>>k;
                sum+=k;
            }
            else if(s==b)
            {
                cout<<sum<<endl;
            }
        }
    }
}

