#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=unique(s.begin(),s.end())-s.begin();
    //s.resize(s.begin(),s.end());
    cout<<x;
}
