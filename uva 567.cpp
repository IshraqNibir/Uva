#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
#include <cstdio>
using namespace std;
int visited[21];
int level[21];
vector<int>adj[21];
void bfs(int s,int n)
{
    queue<int>q;
    //for(int i=0;i<=99;i++)
        //level[i]=0;
    memset(level,0,sizeof level);
    for(int i=0;i<21;i++)
        visited[i]=0;
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
            }
        }
    }
    //cout<<level[n]<<endl;
}
int main()
{
    int i,e,p,nu,u,v,f,m,n,s,kase=1,ret;
    //cout<<"Enter Total Nodes And Edges="<<endl;
    while(1){
    for(u=1;u<=19;u++){
        ret=(scanf("%d",&n));
        if(ret==EOF)
            return 0;
    for(i=1;i<=n;i++)
    {
        cin>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    }
    cin>>p;
    printf("Test Set #%d\n",kase);
    kase++;
    for(i=1;i<=p;i++){
    //cout<<"Enter 1st node"<<endl;
    cin>>f;
    //cout<< "Enter node to know shortest path"<<endl;
    cin>>m;
    bfs(f,20);
    printf("%2d to %2d:%2d\n",f,m,level[m]);
    }
    for(i=0;i<21;i++)
        adj[i].clear();
    printf("\n");
    }
    return 0;
}

