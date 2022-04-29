#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    string s,s1="...";
    cin>>k>>s;
    if(k>=s.length()){
        cout<<s;
    }
    else{
            s=s.substr(0,k);
            s+=s1;
        cout<<s;
    }
}

