#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<int>arr(6);
    for(int i=0;i<6;++i){
        cin>>arr[i];
    }
    int start=0,endd=1,mxLen=0,dis1=arr[start],dis2=arr[endd];

    while(endd<arr.size()){
        if(dis1==dis2){
            if(arr[endd]!=dis2) dis2=arr[endd];
        }
        if(dis1!=arr[endd]&&dis2!=arr[endd]){
            mxLen=max(mxLen,(endd-start));
            start++;
            endd=start;
            dis1=arr[start];dis2=arr[endd];
        }
        if(abs(arr[start]-arr[endd])>1) {
            mxLen=max(mxLen,(endd-start));
            start++;
            endd=start;
            dis1=arr[start];dis2=arr[endd];
        }
        endd++;
    }
    mxLen=max(mxLen,(endd-start));
    cout<<mxLen<<endl;
    return mxLen;
}
