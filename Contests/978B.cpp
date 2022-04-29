#include<bits/stdc++.h>
using namespace std;
int main()
{   int cnt=0,t;
    string s;
    cin>>t>>s;
    for(int i=0;i<t;i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
