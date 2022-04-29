#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    cin>>n;
    double x[n],y[n],md=0,ed=0,p3=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    for(int i=0;i<n;i++){
         md+=abs(x[i]-y[i]);
         ed+=pow(abs(x[i]-y[i]),2);
         p3+=pow(abs(x[i]-y[i]),3);
         v.push_back(abs(x[i]-y[i]));
    }
    sort(v.begin(),v.end());
    double in=v[n-1];
    printf("%.6f\n%.6f\n%.6f\n%.6f\n",md,sqrt(ed),cbrt(p3),in);
}
