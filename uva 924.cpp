#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int visited[100];
vector<int>adj[100];
int spread[1];
int day=0;
void bfs(int s)
{
    for(int i=0;i<100;i++)
        visited[i]=0;
    spread[0]=0;
    queue<int>q;
    q.push(s);
    visited[s]=1;
    int mount,kount,de;
    mount=0;kount=0;de=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
                visited[v]=1;
                kount++;
                q.push(v);
            }
            //cout<<"yes"<<endl;
        }
        if(mount==spread[0]){
            if(kount>spread[0]){
                //cout<<kount<<endl;
                spread[0]=kount;
                //cout<<de<<endl;
                day=de;
            }
            kount=0;
            mount=0;
        }
        mount++;
        de++;
    }
}
int main()
{
    int n,a,b,c,i,j,t,m;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        for(j=0;j<a;j++){
            cin>>b;
            adj[i].push_back(b);
            adj[b].push_back(i);
        }
    }
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>m;
        //cout<<adj[m].size()<<endl;
        bfs(m);
        cout<<spread[0]<<endl;
        //if(spread==0)
            //cout<<"0"<<endl;
       // else
            //cout<<spread<<" "<<day<<endl;
        spread[0]=0;
        day=0;
    }
    return 0;
}

