//Author:  Pranta
//Date:    2020-Aug-09
//Problem: Another_Card_Game_Problem
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    int pC,pR;
    cin>>pC>>pR;
    int chefDigit,rickDigit;
    if(pC%9) chefDigit=pC/9+1;
    else chefDigit=pC/9;
    if(pR%9) rickDigit=pR/9+1;
    else rickDigit=pR/9;
    if(rickDigit<=chefDigit) cout<<"1 "<<rickDigit<<"\n";
    else cout<<"0 "<<chefDigit<<"\n";
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}