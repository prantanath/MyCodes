#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=0;
    string  s,test,sub;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        int cnt=0;
        sub[0]=s[i];
        sub[1]=s[i+1];
        for(int j=0;j<n;j++){
            if(s[j]==sub[0] && s[j+1]==sub[1])
                cnt++;
        }
        if(cnt>max)
        {
            test[0]=sub[0];
            test[1]=sub[1];
            max=cnt;
        }
    }
    for(int i=0;i<2;i++)
    cout<<test[i];
}
