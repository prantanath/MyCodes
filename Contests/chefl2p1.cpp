#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        cin>>n;
        int a[n];
        int cnt=1,mx=1,mn=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
                cnt=1,mn=1;
                for(int j=i;j<n;j++){
                if((abs(a[j]-a[j+1]))<3){
                cnt++;}
                else{
                    i=j+1;
                    v.push_back(cnt);
                   cnt=1;
                   // break;
                }
                }
                //v.push_back(cnt);
        }
        int x= *min_element(v.begin(), v.end());
        int y= *max_element(v.begin(), v.end());
        cout<<x<<" "<<y<<endl;
        /*for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";}*/

    }
}
