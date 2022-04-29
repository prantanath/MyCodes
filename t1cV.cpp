#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,val,c,max=0,v[101];
    cin>>t;
    string s[t];
    vector <string> str;
   // vector <string> ne;
    for(int i=0;i<t;i++){
        cin>>s[i];
    }
    sort(s,s+t);
    for(int i=0;i<t;i++){
            c=0;
            for(int j=i+1;j<t;j++){
                if(s[i]==s[j]){
                    c++;
                }
            }
        str.push_back(s[i]);
        v[i]=c;
    }
    int *ki = max_element(v,v+t);
    for(int i=0;i<t;i++){
            if(v[i]==*ki){
                    cout<<str[i]<<endl;
            //ne.push_back(str[i]);
            }
    }
   // sort(ne.begin(),ne.end());
   // for(int i=0;i<ne.size();i++){
      //  cout<<ne[i]<<endl;
    //}
}
