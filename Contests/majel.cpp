#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long arr[100005];
int count(int l,int r,int key);
long long getmajority(int lf,int ri){
	if(lf==ri) return arr[lf];
    int mid=(lf+ri)/2;
    int left=getmajority(lf,mid);
    int right=getmajority(mid,ri);
    if(left==right) return left;

    int cnLeft= count(lf,mid,left);
    int cnRht=  count(mid+1,ri,right);

    int mx=max(cnLeft,cnRht);

    return (mx>n/2)? 1:0;
}

int count(int l,int r,int key){
    int cnt=0;
    for(int i=l;i<=r;++i){
        if(arr[i]==key) cnt++;
    }
    return cnt;
}

int main() {
	cin>>n;
	for(int i=0;i<n;++i) cin>>arr[i];
	cout<<"ok"<<getmajority(0,n-1)<<endl;
	return 0;
}