#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    set<char>w;
    getline(cin,a);
    for(int i=0;i<a.length();++i){
        if(a[i]>='a' && a[i]<='z'){
            w.insert(a[i]);
    }
    }
    cout<<w.size();

}


