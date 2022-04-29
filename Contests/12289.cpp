#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t;
    cin>>t;
    while(t--){
        cin>>a;
        if(a.length()==5){
            cout<<"3\n";
        }
        else if(a[0]=='o' && a[2]=='e' || a[0]=='o' && a[1]=='n' || a[1]=='n' && a[2]=='e'){
            cout<<"1\n";
        }
        else
            cout<<"2\n";
    }
}
