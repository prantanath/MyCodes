#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ab,bc,ca;
    cin>>ab>>bc>>ca;
    ///ab*ca=a^2bc/bc=a^2.NOW square root of a^2=a
    ///by using the term we get length of a,b,c
    int a= sqrt((ab*ca)/bc);
    int b= sqrt((ab*bc)/ca);
    int c= sqrt((bc*ca)/ab);
    int sum = (a+b+c)*4;
    cout<<sum<<endl;

}
