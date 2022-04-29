#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,s="";
    set<string>w;
    while(cin>>a){
            if(a=="")
            break;
       for(int i=0;i<a.length();++i){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=tolower(a[i]);
            s+=a[i];
        }
        else if(a[i]>='a' && a[i]<='z')
            s+=a[i];
        else if(!s.empty()){
            w.insert(s);
            s.clear();
        }
       }
        if(!s.empty()) {
                w.insert(s);
            s.clear();}
    }
    for(auto it=w.begin();it!=w.end();++it){
        cout<<*it<<endl;
    }
}

