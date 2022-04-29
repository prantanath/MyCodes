#include <bits/stdc++.h>
using namespace std;
#define G 1
#define W 0
#define B 2
vector<int>adj[100005];
vector<int>tr[100005];
vector<int> order;
map<int,int>mp;
int col[100005];
int scc=0;
void dfs(int u){
    col[u]=G;
    int v;
    for(int i=0;i<adj[u].size();++i){
        v=adj[u][i];
        if(col[v]==W){
            mp[u]++;
            dfs(v);
        }
    }
    //zcol[u]=B;
    order.push_back(u);
}
void dfstr(int u){
    col[u]=G;
    int v;
    for(int i=0;i<tr[u].size();++i){
        v=tr[u][i];
        if(col[v]==W){
            mp[u]++;
            dfstr(v);
        }
    }

    //col[u]=B;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        tr[v].push_back(u);
    }
    for(int i=1;i<=n;++i) col[i]=W;
    for(int i=1;i<=n;++i){
        if(col[i]==W){
            dfs(i);
        }
    }
    int c=0;
    for(int i=1;i<=n;++i) col[i]=W;
    for(int i=order.size()-1;i>=0;--i){

        c++;
        int v=order[i];
        //cout<<v<<" "<<col[v]<<endl;
        if(col[v]==W){
            dfstr(v);
            scc++;
            if(scc>1){
                --c;
                break;
            }
        }
    }
    cout<<c<<endl;
}

