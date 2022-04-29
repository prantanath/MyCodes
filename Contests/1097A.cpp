#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,s[7];
    cin>>a;
    int cnt=0;
    for(int i=0;i<5;i++){
        cin>>s[i];
        if(a[0]==s[i][0] || a[1]==s[i][1])
            cnt++;
    }
    if(cnt>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
