#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int visited[2510];
int spread=0;
int day=0;
vector<int>adj[2510];
void bfs(int s)
{
    for(int i=0;i<2510;i++)
        visited[i]=0;
    queue<int>q;
    q.push(s);
    visited[s]=1;
    int mount=0,kount=0,de=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
                kount++;
                visited[v]=1;
                q.push(v);
            }
        }
        if(mount==spread){
            de++;
            if(kount>spread){
                //cout<<kount<<endl;
                spread=kount;
                day=de;
                //cout<<de<<endl;
            }
            kount=0;
            mount=0;
        }
        mount++;
    }
}
int main()
{
    int i,e,p,nu,u,v,f,m,n,s,t;
    cin>>nu;
    for(u=0;u<nu;u++)
    {
        //cin>>u>>v;
        cin>>f;
        for(i=0;i<f;i++){
            cin>>v;
            adj[u].push_back(v);
            //adj[v].push_back(u);
        }
    }
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>p;
        bfs(p);
        if(spread==0)
            cout<<"0"<<endl;
        else
            cout<<spread<<" "<<day<<endl;
        spread=0;
        day=0;
    }
    return 0;
}

