#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /*vector<int> l;
    for(int i=1;i<=100;i++)
        l.push_back(i);*/
    int n,i;
    cin>>n;
    if(n%2!=0){
        cout<<"-1"<<endl;
    }
    else
    for(i=1;i<=n;i+=2){
        cout<<i+1<<" "<<i<<" ";

           /* c++;
            swap(i,v[c])
            cout<<i<<" "<<v[c+1]
            i+=2;*/
    }

}
