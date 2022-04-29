#include <bits/stdc++.h>
#define SIZE 10000
#define INF 1e9
using namespace std;
struct Component{
    int node=0, weight=0;
    Component(){}

    Component(int n, int w){
        node=n;
        weight=w;
    }
    bool operator <(const Component &a)const &{
        return weight<a.weight;
    }
    bool operator >(const Component &a)const &{
        return weight>a.weight;
    }
};
priority_queue <Component, vector <Component>, greater <Component> > pq;
int dis[SIZE];
bool vis[SIZE];
int path[SIZE];
vector <int> adj[SIZE];
vector <int> adjw[SIZE];
int n, e;

void dijk(int source){
    for(int i=1; i<=n; i++){
        dis[i]=INF;
        vis[i]=false;
        path[i]=-1;
    }
    dis[source]=0;
    pq.push(Component(source, 0));
    int u, v,w;
    while(!pq.empty()){
        u=pq.top().node;
        pq.pop();
        if(vis[u]) continue;
        vis[u]=true;
        for(int i=0; i<(int)adj[u].size(); i++){
            v=adj[u][i];
            w=adjw[u][i];
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                path[v]=u;
                pq.push(Component(v, dis[v]));
            }
        }
    }
}
void pathPrint(int a)
{
    if(path[a]==-1) return;
    pathPrint(path[a]);
    printf("->%c",a+'a'-1);
}
int main(){
    int u, v, w;
    scanf("%d %d", &n, &e);

    for(int i=0; i<e; i++){
        scanf("%d %d %d", &u, &v, &w);
        adj[u].push_back(v);
        //adj[v].push_back(u);
        adjw[u].push_back(w);
        //adjw[v].push_back(w);
    }
    dijk(1);
    printf("Vertex\t\t Distance\t Path");
    for (int i = 1; i <= n; i++)
    {
        printf("\na -> %c \t\t %d \t\t a",'a'+i-1, dis[i]);
        pathPrint(i);
    }

    return 0;
}


