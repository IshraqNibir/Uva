#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
using namespace std;
int visited[210],level[210];
vector<int>adj[210];
void bfs(int s,int n)
{
    for(int i=0;i<210;i++)
        visited[i]=0;
    for(int i=0;i<210;i++)
        level[i]=0;
    queue<int>q;
    q.push(s);
    level[s]=0;
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
                level[v]=level[u]+1;
                visited[v]=1;
                q.push(v);
            }
        }
    }
}
int main()
{
    while(1){
    int i,e,p,nu,u,v,f,m,n,s,j,k,ret;
    vector<int>my;
    scanf("%d",&nu);
    if(nu==0)
        break;
    scanf("%d",&e);
    //cin>>nu>>e;
    for(i=1;i<=e;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int br1=0;
    for(i=0;i<nu;i++){
        bfs(i,nu);
        for(j=0;j<nu;j++){
            if(level[j]==1){
               my.push_back(j);
            }
        }
        //cout<<my.size()<<endl;
        //for(j=0;j<my.size();j++)
           //cout<<my[j]<<" ";
        for(j=0;j<my.size();j++){
            bfs(my[j],nu);
            for(k=j+1;k<my.size();k++){
                if(level[my[k]]==1){
                    cout<<"NOT BICOLORABLE."<<endl;
                    br1=1;
                    break;
                }
            }
            if(br1==1)
               break;
        }
        my.clear();
        if(br1==1)
            break;
    }
    if(br1==0)
        cout<<"BICOLORABLE."<<endl;
    for(i=0;i<210;i++)
        adj[i].clear();
    }
    return 0;
}

