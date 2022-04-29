#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,evn=0,odd=0;
        cin>>n>>x;
        int arr[n+5];
        for(int i=0;i<n;++i){
            cin>>arr[i];
            if(arr[i]%2==0){
                evn++;
            }
            else
            {
                odd++;
            }
        }
        if(odd==0)
            cout<<"No"<<endl;
        else if(x%2==1){
            if(x==n){
                if(odd%2==1)
                    cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;

            }
            else
                cout<<"Yes"<<endl;
        }
        else if(x%2==0){
            if(evn ==0)
                cout<<"No"<<endl;
            else if(x==n){
                if(odd%2==1)
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;
            }
            else
                cout<<"Yes"<<endl;

        }

    }
}
