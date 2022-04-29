#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a="Hajj",b="Umrah",c="Hajj-e-Akbar",d="Hajj-e-Asghar",f="*";
    int i=0;
    while(cin>>s){
        if(s==f){
            break;
        }
        else if(s==a){
            cout<<"Case "<<++i<<": "<<c<<endl;
        }
        else if(s==b){
            cout<<"Case "<<++i<<": "<<d<<endl;
        }
    }
}
