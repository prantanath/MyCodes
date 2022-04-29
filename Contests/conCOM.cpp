#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
int dis[100005];
void bfs(int x);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,e,cnt=0;
    cin>>n>>e;
    for(int i=1;i<=e;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
        for(int i=1;i<=n;++i) {
            dis[i]=-1;
        }
    for(int i=1;i<=n;++i) {
            if(dis[i]==-1){
                cnt++;
                bfs(i);
            }
        }
    cout<<cnt-1<<endl;
}
void bfs(int x){
        queue<int>q;
        q.push(x);
        dis[x]=0;
        while(!q.empty()){
            int y=q.front();
            q.pop();
            for(int i=0;i<adj[y].size();++i){
                int z=adj[y][i];
                if(dis[z]==-1){
                    q.push(z);
                    dis[z]=dis[y]+1;
                }
            }
        }

}
