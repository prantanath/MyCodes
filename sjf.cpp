#include<bits/stdc++.h>
using namespace std;
int cal[5][6];
void sortArrival(int n);
void compelation(int n);
int main()
{
    int n,t;
    cout<<"Enter Number of Process: ";
    cin>>n;
    cout<<"  Enter Details  "<<endl;
    for(int i=0;i<n;++i){
        cout<<"Enter Id: ";
        cin>>cal[i][0];
        cout<<"Enter Arrival Time: ";
        cin>>cal[i][1];
        cout<<"Enter Burst Time: ";
        cin>>cal[i][2];
    }
    sortArrival(n);
    compelation(n);
    cout<<"*****After Process*****"<<endl;
    cout << "Process ID\tArrival Time\tBurst Time\tWaiting "
            "Time\tTurnaround Time"<<endl;
    for (int i = 0; i < n; i++) {
        cout << cal[i][0] << "\t\t" << cal[i][1] << "\t\t"
             << cal[i][2] << "\t\t" << cal[i][4] << "\t\t"
             << cal[i][5] << "\n";
    }
}

void sortArrival(int n){
    for(int i=0;i<n-1;++i){
        if(cal[i][1]>cal[i+1][1]){
            for(int k=0;k<3;++k){
                swap(cal[i][k],cal[i+1][k]);
            }
        }
    }
}

void compelation(int n){
    int t,p;
    cal[0][3] = cal[0][1] + cal[0][2];
    cal[0][5] = cal[0][3] - cal[0][1];
    cal[0][4] = cal[0][5] - cal[0][2];

    for(int i=1;i<n;++i){
        t=cal[i-1][3];
        int l=cal[i][2];
        for(int j=i;j<n;++j){
            if(t>=cal[j][1] and l>=cal[j][2]){
                l=cal[j][2];
                p=j;
            }
        }
        cal[p][3]=t+cal[p][2];
        cal[p][5]=cal[p][3]-cal[p][1];
        cal[p][4]=cal[p][5]-cal[p][2];
        for(int k=0;k<6;++k){
            swap(cal[p][k],cal[i][k]);
        }

    }
}
