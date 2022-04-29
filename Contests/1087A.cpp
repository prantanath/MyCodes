#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t,s;
    cin>>t;
    int x= (t.length()-1)/2;
    cout<<t[x];
    int tmp1=x+1,tmp2=x-1;
    while(tmp1<t.length()){
        cout<<t[tmp1];
        if(tmp2>=0)
        cout<<t[tmp2];
        tmp1++;
        tmp2--;
    }


}
