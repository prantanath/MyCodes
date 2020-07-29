#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n,A,B,holes=0;
    cin>>n>>A>>B;
    int arr[n+5],sum=0;
    vector<int>v;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(i>0) v.push_back(arr[i]);
    }
    int first_hole=arr[0];
    double prop=(double)(A*first_hole)/sum;
//    cout<<prop;
   // bool flag=false;
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<n;++i)
    {
        if(prop>=B){
            //flag=true;
            break;
        }
        else
        {
            ++holes;
//            cout<<sum<<"-"<<v[i]<<endl;
            sum-=v[i];
//            cout<<sum<<endl;
            prop=(double)(A*first_hole)/(sum);

        }
//        flag=true;
//        cout<<prop<<endl;
    }
    //if(flag)
    cout<<holes<<endl;
}

int main()
{
    int x,t;  solve();

}

