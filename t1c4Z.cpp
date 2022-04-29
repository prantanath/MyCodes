#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,cpy,chk;
    cin>>s;
    int q;
    cin>>q;
    while(q--)
    {
      cin>>chk;
      bool found = (s.find(chk) != string::npos);
      if(found){
        cout<<"1"<<endl;
    }
    else
        cout<<"0"<<endl;
}
}
