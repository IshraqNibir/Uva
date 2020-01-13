#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
using namespace std;
int visited[100],parent[100];
vector<int>adj[100];
int nu,f;
vector<int>route;
void finding_path(int node)
{
    if(parent[node]!=f)
    {
        finding_path(parent[node]);
        route.push_back(node);
    }
    else{
         char ch1,ch2;
         ch1=parent[node];ch2=node;
         cout<<ch1<<ch2;
    }
}
void bfs(int s)
{
    for(int i=0;i<100;i++)
        visited[i]=0;
    queue<int>q;
    q.push(s);
    visited[s]=1;
    int mount=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        //if(u==nu)
            //break;
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
                parent[v]=u;
                visited[v]=1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--){
    int i,j,e,u,v,s,qu;
    for(i=0;i<100;i++)
        parent[i]=0;
    cin>>e>>qu;
    string ct1,ct2;
    for(i=1;i<=e;i++)
    {
        cin>>ct1>>ct2;
        u=ct1[0];v=ct2[0];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(j=1;j<=qu;j++){
        cin>>ct1;
        f=ct1[0];
        bfs(f);
        cin>>ct2;
        nu=ct2[0];
        finding_path(nu);
        char p;
        for(i=0;i<route.size();i++){
            p=route[i];
            cout<<p;
        }
        cout<<endl;
        for(i=0;i<route.size();i++)
            route.clear();
    }
    for(i=0;i<100;i++)
        adj[i].clear();
    if(t!=0)
        cout<<endl;
    }
    return 0;
}

