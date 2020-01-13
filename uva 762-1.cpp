#include <iostream>
#include <cstring>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
int visited[1000001],parent[1000001];
vector<int>adj[1000001];
int check=0;
char ara[400][4];
int nu,f;
void finding_path(int node)
{
    if(parent[node]!=f)
    {
        finding_path(parent[node]);
      //cout<<parent[node]<<" "<<node<<endl;
      cout<<ara[parent[node]]<<" "<<ara[node]<<endl;
    }
    else
         cout<<ara[parent[node]]<<" "<<ara[node]<<endl;
}
void bfs(int s)
{
    for(int i=0;i<1000001;i++){
        visited[i]=0;
        parent[i]=0;
    }
    queue<int>q;
    q.push(s);
    visited[s]=1;
    int mount=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(u==nu){
            check=1;
        }
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
    int e;
    char a[3],b[3],c[3],d[3];
    int p=0;
    while(scanf("%d",&e)==1){
        if(p!=0)
        cout<<endl;
    p++;
    char a[3],b[3],c[3],d[3];
    int i,p,u,v,m,n,s;
    for(i=1;i<=e;i++)
    {
        scanf("%s %s",&a,&b);
        u=a[0]+a[1];
        v=b[0]+b[1];
        strcpy(ara[u],a);
        strcpy(ara[v],b);
        //cout<<u<<" "<<v<<endl;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    scanf("%s %s",&c,&d);
    f=c[0]+c[1];
    nu=d[0]+d[1];
    //if(f==nu){
        //cout<<"No route"<<endl;
        //continue;
    //}
    bfs(f);
    //cout<<f<<" "<<nu<<endl;
    if(check==0||parent[nu]==0)
        cout<<"No route"<<endl;
    else
        finding_path(nu);
    for(i=0;i<1000001;i++)
        adj[i].clear();
    check=0;
    memset(ara,0,sizeof(ara));
    }
    return 0;
}
