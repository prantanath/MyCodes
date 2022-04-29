#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c=0,x=0;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a')
            c++;
        else
            x++;
    }
    if(c>x)
        cout<<n;
    else if(c==x)
        cout<<n-1;
    else
    {
        while(true){
            x--;
            if(c>x)
                break;
        }
        cout<<c+x;

    }
}
