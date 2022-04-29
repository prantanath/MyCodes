#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,cpy,chk;
    cin>>s>>chk;
    cpy=s;
    s+=cpy;
    size_t position = s.find(chk);
    if(position != string::npos){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}
