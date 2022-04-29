#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p,t1,t2,l;
    cin>>s;
    p=s;
    int n=s.length(),flag=0,c=0,d=0;
    int t=(n-1)/2,k=(n+3)/2;
    reverse(p.begin(),p.end());
    if(s==p){
        t1=s.substr(0,t);
        l=t1;
        reverse(t1.begin(),t1.end());
        //cout<<t1<<endl<<l;
        if(t1==l){
            t2=s.substr(k-1,n);
            string l1=t2;
            reverse(t2.begin(),t2.end());
            //cout<<t2<<endl<<l1;
            if(t2==l1)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
