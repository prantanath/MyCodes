#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,b,sum=0,sum2=0;
	map<int,int>mp;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
	}
	cin>>m;
	while(m--){
            cin>>b;
         sum+=mp[b]+1;
         sum2+=n-mp[b];
	}
    cout<<sum<<" "<<sum2<<endl;
}

