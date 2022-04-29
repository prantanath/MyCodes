#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=2*n+1;
    for(int i=0;i<row;++i){
        for(int j=0;j<2*n-i;++j){
            cout<<" ";
        }
    }
}
