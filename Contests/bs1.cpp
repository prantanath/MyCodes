#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long arr[100005];
vector<long long>v;
long long bs(long long x){
	long long low=0,hi=n-1,mid;
	while(1){
		if(hi<low) return -1;
		mid=(hi+low)/2;
		if(x==arr[mid]) return mid;
		else if (x>arr[mid]){
			low=mid+1;
		}
		else {
			hi=mid-1;
		}
	}
	
}
int main() {
	cin>>n;
	for(int i=0;i<n;++i) cin>>arr[i];
	cin>>m;
	long long brr[m+1];
	for(int i=0;i<m;++i) {
		cin>>brr[i];
		cout<<bs(brr[i])<<" ";
	}
	return 0;
}