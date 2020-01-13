#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <string.h>
using namespace std;
int visited[100000],level[100000];
vector<int>adj[100000];
int nodes;
void bfs(int s,int n)
{
    for(int i=0;i<n;i++)
        visited[i]=0;
    for(int i=0;i<n;i++)
        level[i]=0;
    queue<int>q;
    q.push(s);
    level[s]=0;
    visited[s]=1;
    int mount=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
                level[v]=level[u]+1;
                visited[v]=1;
                q.push(v);
                nodes++;
            }
        }
    }
}
int main()
{
    int i,e,p,nu,u,v,f,m,n,s;
    int kase=1;
    while(1){
    cin>>e;
    int tnodes=0;
    if(e==0)
        break;
    int ara[100000]={0};
    for(i=1;i<=e;i++)
    {
        cin>>u>>v;
        if(ara[u]==0 || ara[v]==0){
            if(ara[u]==0){
                ara[u]=1;
                tnodes++;
            }
            if(ara[v]==0){
                ara[v]=1;
                tnodes++;
            }
        }
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //cout<<tnodes<<endl;
    //cout<<"Enter 1st node"<<endl;
    while(1){
        cin>>f>>m;
        if(ara[f]==0)
            nodes=0;
        else
            nodes=1;
        if(f==0 && m==0)
            break;
        bfs(f,100000);
        //cout<<nodes<<endl;
    //cout<< "Enter node to know shortest path"<<endl;
    //cin>>nu;
    //cout<<"Shortest path is="<<level[nu]<<endl;
        int mount=0;
        for(i=0;i<100000;i++){
           if(level[i]>m){
               //cout<<i<<endl;
               mount++;
           }
        }
        //cout<<mount<<endl;
        //cout<<tnodes<<endl;
        //cout<<nodes<<endl;
        mount=mount+(tnodes-nodes);
        if(tnodes==1)
            mount=0;
        printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",kase,mount,f,m);
        kase++;
    }
    for(i=0;i<100000;i++)
        adj[i].clear();
    //memset(level,0,sizeof(level));
    }
    return 0;
}

