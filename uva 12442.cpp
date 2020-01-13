#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

vector<int>graph,sum;
vector<bool>vis,vis1;
//int cnt;
int dfs(int s)
{
     vis[s]=true;
     vis1[s]=true;
     int cnt=0;
     if(graph[s]!=-1 && !vis1[graph[s]])
         cnt=cnt+1+dfs(graph[s]);
     return sum[s]=cnt;
}
int main()
{
    int t,kase;
    kase=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,j,k,l,u,v;
        graph.assign(n+1,-1);
        sum.assign(n+1,-1);
        for(i=1;i<=n;i++){
            cin>>u>>v;
            graph[u]=v;
        }
        vis.assign (n+1,false);
        int leng=0,pos;
        pos=0;
        for(i=1;i<=n;i++){
            vis1.assign(n+1,false);
            if(!vis[i])
                dfs(i);
            if(sum[i]>leng){
                leng=sum[i];
                pos=i;
            }
        }
        cout<<sum[17]<<endl;
        printf("Case %d: %d\n",kase,pos);
        kase++;
    }
    return 0;
}
