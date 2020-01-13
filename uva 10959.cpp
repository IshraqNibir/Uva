#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int visited[1005],level[1005];
vector<int>adj[1005];
void bfs(int s)
{
    for(int i=0;i<1005;i++){
        visited[i]=0;
        level[i]=0;
    }
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
            }
        }
    }
}
int main()
{
    int t,a,b,u,v,i,j;
    cin>>t;
    for(i=1;i<=t;i++){
        int n,co;
        cin>>n>>co;
        for(j=1;j<=co;j++){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int s=0;
        bfs(s);
        for(j=1;j<n;j++)
            cout<<level[j]<<endl;
        if(i!=t)
           cout<<endl;
        for(j=0;j<1005;j++)
            adj[j].clear();
    }
    return 0;

}

