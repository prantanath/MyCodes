#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%10==2 || n%10==4 || n%10==5 || n%10==7 || n%10==9){
        cout<<"hon";
    }
    else if(n%10==0 || n%10==1 || n%10==6 || n%10==8){
        cout<<"pon";
    }
    else
        cout<<"bon";
}
