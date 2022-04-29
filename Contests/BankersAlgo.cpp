#include<stdio.h>
#define N 5
#define M 3
int alc[N][M]={ { 0, 1, 0 }, { 2, 0, 0 },{ 3, 0, 2 },{ 2, 1, 1 }, { 0, 0, 2 } };
int mx[N][M]= { { 7, 5, 3 },{ 3, 2, 2 },{ 9, 0, 2 },{ 2, 2, 2 },{ 4, 3, 3 } };
int avl[M] ={3,3,2};
int need[N][M],safeSeq[N];
bool vis[N];
void chkSafety();
int main()
{
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            need[i][j]=mx[i][j]-alc[i][j];
        }
    }
    for(int i=0;i<N;++i) vis[i]=false;
    chkSafety();

}
void chkSafety(){
    int cnt =0;
    bool isSafe=false;
    while(cnt<N){
        for(int i=0;i<N;++i){
            if(!vis[i]){
                bool flag=false;
                for(int j=0;j<M;++j){
                    if(need[i][j]>avl[j]){
                        flag=true;
                        break;
                    }
                }
                if(!flag){
                    safeSeq[cnt++]=i;
                    vis[i]=true;
                    isSafe=true;
                    for(int k=0;k<M;++k){
                        avl[k]+=alc[i][k];
                    }
                }
            }
        }
        if(!isSafe) break;
    }
    if(cnt<N) puts("Not safe!");
    else{
        puts("The state is Safe!!");
        printf("The Safe Sequence is: ");
        for(int i=0;i<N;++i){
            printf("P%d",safeSeq[i]);
            if(i!=N-1) printf("->");
        }
        printf("\n");
    }

}
