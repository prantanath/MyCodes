#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
const int node=1e5;
int lvl[node],vis[node];
vector<int>adjList[node];
void bfs()
{
    queue<int>q;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        vis[i]=0;
        adjList[i].clear();
    }
    lvl[1]=0;vis[1]=0;q.push(1);
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }
    while(!q.empty())
    {
        int cur= q.front();
        q.pop();
        for(int i=0;i<adjList[cur].size();++i)
        {
            int child=adjList[cur][i];
            if(vis[child]==0)
            {
                vis[child]=1;
                lvl[child]=lvl[cur]+1;
                q.push(child);
            }
        }
    }
    cout<<lvl[n]<<"\n";
}

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    bfs();
}


