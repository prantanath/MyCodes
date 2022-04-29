#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        int c=0;
        n=s.length();
        for(int i=0;i<n;++i){
            if(s[i]=='x' && s[i+1]=='y' ||s[i]=='y' && s[i+1]=='x'){
                c++;
                i+=1;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

