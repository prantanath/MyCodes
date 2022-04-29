#include<bits/stdc++.h>
using namespace std;

struct Element{
    int node,distance;
    Element(int n,int d){
        node=n;
        distance=d;
    }

    bool operator < (const Element &a)const &{
        return distance<a.distance;
    }
    bool operator > (const Element &a)const &{
        return distance>a.distance;
    }
};
priority_queue <Element,vector<Element>,greater<Element>>pq;

int dis[1000],i;
bool vis[1000];
int n,e;
vector <int> adj[1000],adjw[1000];

void dijk(int s){
    for(int i=1; i<=n; i++){
        dis[i]=99999999999999;
        vis[i]=false;
    }
    dis[s]=0;
    pq.push(Element(s,0));
    int u,v,w;
    while(!pq.empty()){
        u=pq.top().node;
        pq.pop();

        for(i=0; i<adj[u].size();i++){
            v=adj[u][i];
            w=adjw[u][i];
            if(dis[u]+w < dis[v]){
                dis[v]=dis[u]+w;
                pq.push(Element(v,dis[v]));
            }
        }
    }
}
int main(){
    scanf("%d %d",&n,&e);
    int u,v,w;
    for(i=0; i<e ;i++){
        scanf("%d %d %d",&u,&v,&w);
        adj[u].push_back(v);
        adjw[u].push_back(w);
    }
    dijk(1);
    for (int i = 1; i <= n; i++)
    {
        printf("\n1 -> %d \t\t %d",i, dis[i]);
    }
    return 0;
}
