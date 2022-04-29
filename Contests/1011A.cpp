#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x=0,cnt=0;
    string s;
    set<char>st;
    vector<char>v;
    cin>>n>>k>>s;
    //sort(s.begin(),s.end());
    for(int i=0;i<s.length();++i){
        /*if(s[i]==s[i+1] || s[i+1]==s[i]+1) {
            s[i+1]='.';
        }*/
        st.insert(s[i]);
    }
    for(auto n:st){
        v.push_back(n);
    }
    for(int i=0;i<v.size();++i){

        if(v[i+1]==v[i]+1){
            cnt++;
            x+=v[i];
            i++;
        }
        else{
            x+=v[i];
            cnt++;
        }
        if(cnt==k) break;

        }
    //cout<<s;
    if(cnt==k)
    cout<<x-(k*96);
    else
        cout<<-1<<endl;
}
