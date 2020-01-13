#include <bits/stdc++.h>
using namespace std;
int visited[101],level[101],level1[101];
int cnt;
vector<int>adj[101];
void bfs(int s)
{
    for(int i=0;i<101;i++)
        visited[i]=0;
    queue<int>q;
    q.push(s);
    if(!cnt)
        level[s]=0;
    else
        level1[s]=0;
    visited[s]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
                if(!cnt)
                    level[v]=level[u]+1;
                else
                    level1[v]=level1[u]+1;
                visited[v]=1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int t,ks;
    cin>>t;
    ks=1;
    while(t--){
        int i,e,p,nu,u,v,f,m,n,s,st,ed;
        cin>>nu>>e;
        for(i=1;i<=e;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cin>>st>>ed;
        cnt=0;
        bfs(st);
        cnt=1;
        bfs(ed);
        int ans=0;
        for(i=0;i<nu;i++)
        {
            ans=max(ans,(level[i]+level1[i]));
        }
        printf("Case %d: %d\n",ks++,ans);
        for(i=0;i<101;i++){
            adj[i].clear();
            level[i]=0;
            level1[i]=0;
        }
    }
    return 0;
}

