#include <iostream>
#include <queue>
#include <vector>
#include <string.h>
using namespace std;
int visited[202],color[202];
vector<int>adj[202];
vector<int>item;
int bfs(int s,int n)
{
    for(int i=0;i<n;i++)
        visited[i]=0;
    int v;
    queue<int>q;
    q.push(s);
    color[s]=0;
    visited[s]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                v=adj[u][i];
                if(color[u]==0)
                   color[v]=1;
                else
                    color[v]=0;
                visited[v]=1;
                q.push(v);
            }
            else{
                v=adj[u][i];
                if(color[u]==color[v])
                    return 2;
            }

        }
    }
    return 1;
}
int main()
{
    while(1){
    int i,e,p,nu,u,v,f,m,n,s;
    cin>>nu;
    if(nu==0)
        break;
    cin>>e;
    memset(color,0,sizeof(color));
    for(i=1;i<=e;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    p=bfs(0,nu);
    if(p==1)
        cout<<"BICOLORABLE."<<endl;
    else if(p==2)
        cout<<"NOT BICOLORABLE."<<endl;
    for(i=0;i<202;i++)
        adj[i].clear();
    }
    return 0;
}

