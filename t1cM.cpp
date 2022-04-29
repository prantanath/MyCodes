#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,l,t;
    cin>>t;
    while(t--){
    string x="a",s;
    cin>>n>>a>>b;
    if(a!=b){
    for(int i=0;i<b;i++){
        s+='a'+i;
    }
    cout<<s;
    /*for(int i=0;i<n-b;i++){
        //s+='a'+i+1;
        cout<<s[i];
    }*/
   l=s.length();
   //cout<<s;
   if(l>n-b)
   {
    for(int i=0;i<n-b;i++){
        cout<<s[i];
    }
}
else{
for(int i=0;i<(n-b)/l;i++){
    cout<<s;
}
for(int i=0;i<(n-b)%l;i++){
    cout<<s[i];
}
}
}
else
{
 /*   if(a==1 && b==1){
            for(int i=0;i<n;i++)
                cout<<char('a'+i);
        }*/
   // else{
for(int i=0;i<b;i++){
    s+='a'+i;
}
cout<<s;
for(int i=0;i<(n-b)/b;i++){
    cout<<s;
}
for(int i=0;i<(n-b)%b;i++){
    cout<<s[i];
}

}
cout<<endl;
}
}

