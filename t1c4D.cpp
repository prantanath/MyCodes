#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,cpy;
    while(cin>>s){
    if(s=="-"){
        break;
    }
    int t,x,sum=0;
    cin>>t;
    while(t--){
        cin>>x;
        cpy=s.substr(0,x);
        s.erase(0,x);
        s+=cpy;
        //sum+=x;
    }
    cout<<s<<endl;
   /* int n=s.length();
    int shf=abs(n-sum);
    int tsfl=shf%n;

    //cout<<shf;
    for(int i=tsfl;i<n;i++){
        cout<<s[i];
    }
    for(int i=0;i<tsfl;i++){
        cout<<s[i];
    }
    cout<<endl;
    }*/
}
}
