#include<bits/stdc++.h>
using namespace std;
struct task{
    int start;
    int finish;
};
int comp(task a,task b){
 return a.finish>b.finish;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    struct task arr[n];
    for(int i=0;i<n;++i){
        scanf("%d%d",&arr[i].start,&arr[i].finish);
    }
    sort(arr,arr+n,comp);
    int cnt=1;
    for(int j=0;j<n;++j){
        if(arr[j].finish<=arr[j+1].start) cnt++;
    }
    printf("%d",cnt);
}

