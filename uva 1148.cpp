
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int visited[100005],level[100005];
vector<int>adj[100005];
void bfs(int s)
{
    for(int i=0;i<100005;i++){
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
    int t,p,i;
    p=0;
    cin>>t;
    //cout<<endl;
    for(i=1;i<=t;i++)
    {
        int a,b,j,k,s,d,u,v,l;
        cin>>a;
        for(j=1;j<=a;j++){
            cin>>u;
            cin>>b;
            for(k=1;k<=b;k++){
                cin>>v;
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }
        cin>>s>>d;
        bfs(s);
        if(p>0)
            cout<<endl;
        cout<<s<<" "<<d<<" "<<level[d]-1<<endl;
        //if(i!=t)
            //cout<<endl;
        for(l=0;l<100005;l++)
            adj[l].clear();
        p++;
    }
    return 0;

}
