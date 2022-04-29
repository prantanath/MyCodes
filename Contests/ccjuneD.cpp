#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,ts;
    cin>>t;
    while(t--)
    {
        cin>>ts;
        while(ts%2!=1){
                ts/=2;
            }
        cout<<ts/2<<endl;
    }
    return 0;
}
