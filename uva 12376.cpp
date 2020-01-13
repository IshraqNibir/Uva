#include <iostream>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
using namespace std;
int visited[210],ara[210];
vector<int>adj[210];
int kase=1;
void bfs(int s)
{
    for(int i=0;i<100;i++)
        visited[i]=0;
    vector<int>my;
    my.push_back(s);
    visited[s]=1;
    int value=0;
    int fin;
    while(my.size()>0)
    {
        int maximum=0;
        int pos;
        int u=my.front();
        my.pop_back();
        int mount=0;
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
                mount=1;
                if(ara[v]>maximum){
                    maximum=ara[v];
                    pos=v;
                }
            }
        }
        value=value+maximum;
        visited[pos]=1;
        fin=pos;
        if(mount==1)
            my.push_back(pos);
    }
    printf("Case %d: %d %d\n",kase,value,fin);
    kase++;
}
int main()
{
    int i,T,nu,e,u,v;
    cin>>T;
    while(T--){
        cin>>nu>>e;
        for(i=0;i<nu;i++)
            scanf("%d",&ara[i]);
        for(i=1;i<=e;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            //adj[v].push_back(u);
        }
        bfs(0);
        memset(ara,0,sizeof(ara));
        if(T!=0)
            cout<<endl;
        for(i=0;i<210;i++)
            adj[i].clear();
    }
    return 0;
}

