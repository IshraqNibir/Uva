#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
vector<int>graph;
vector<bool>vis;
int cnt=0;
int value=0;
int dfs(int s)
{
    if(!vis[s]){
        vis[s]=true;
        if(graph[s]!=-1)
            cnt=cnt+1+dfs(graph[s]);
    }
}
int main()
{
    int t,kase;
    cin>>t;
    kase=1;
    while(t--){
        int n,pos=0;
        cin>>n;
        graph.assign(n+1,-1);
        int u,v,i,j,k;
        for(i=1;i<=n;i++){
            cin>>u>>v;
            graph[u]=v;
        }
        for(i=1;i<=n;i++){
            vis.assign(n,false);
            cnt=0;
            dfs(i);
            if(cnt>value){
                pos=i;
                value=cnt;
            }
        }
        printf("Case %d: %d\n",kase,pos);
        kase++;
        graph.clear();
        value=0;
    }
    return 0;
}
