#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mxx=0;
    string s;
    map <string , int> maap;
    map <string , int> :: iterator it;
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>s;
        maap[s]++;
        }
    for(it=maap.begin();it!=maap.end();it++)
        {
            if(it->second>mxx){
                mxx=it->second;
            }
        }
    for(it=maap.begin();it!=maap.end();it++)
        {
            if(mxx==it->second){
                cout<<it->first<<endl;
            }
        }

}

