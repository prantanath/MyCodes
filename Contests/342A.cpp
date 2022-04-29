#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    map<int ,int> mp;
    map<int ,int> ::iterator it;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int z=n/3;
    bool f=true;
    if(mp[5]>0 || mp[7]>0){
        //f=false;
        cout<<-1;
        return 0;
    }
    else if(mp[1]!=z || mp[2]+mp[3]!=z || mp[4]+mp[6]!=z  || mp[4]>mp[2])
    {
        //f=false;
        cout<<-1;
        return 0;
    }
    else{
    while(z--){
    {
        if(mp[6]>0)
        {
            if(mp[3]>0){
                cout<<"1 3 6"<<endl;
                mp[3]--;
            }
            else
            {cout<<"1 2 6"<<endl;
                mp[2]--;
            }
            mp[6]--;
        }
        else if(mp[4]>0 && mp[2]>0){ cout<<"1 2 4"<<endl;mp[2]--;mp[4]--;}
        //else {f=false;break;}

    }
    }
    /*if(f==false){
        cout<<-1;
    }*/

}
}
