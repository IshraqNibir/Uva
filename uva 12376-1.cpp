#include<bits/stdc++.h>
using namespace std;

#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)

#define MOD 1000000007
#define MX 100010

vector<int>adj[105];
bool vis[105];
int lu[105], sum, ed;

void dfs(int u)
{
    vis[u]=true;
    int mx=0, vv=-1;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!vis[v])
        {
            if(lu[v]>mx)    mx=lu[v], vv=v;
        }
    }
    if(vv!=-1) sum+=mx, ed=vv, dfs(vv);
return;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int kk=1, tc, n, m, u, v;
    string s;
    cin>>tc;
    while(tc--)
    {
        ed=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>lu[i];
        for(int i=0;i<m;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            //adj[v].push_back(u);
        }
        CLR(vis);
        sum=0;
        dfs(0);
        cout<<"Case "<<kk++<<": "<< sum <<" "<<ed<<"\n";
        for(int i=0;i<n;i++) adj[i].clear();
    }

    return 0;
}
