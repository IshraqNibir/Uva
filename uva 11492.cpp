#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;
#define mx 4002
#define inf 1000000000
vector <int > g[mx];
vector <int > cost[mx];
vector <int> road[mx];
int d[mx][30];
struct node {
   int city, dist;
   int name;
   node (int a, int b,int color) { city = a; dist = b;name=color;}
   bool operator < (const node& p) const {
      return p.dist < dist;
   }
};
map<string,int>my;
int dijkstra (int src, int des) {
   for(int i = 0; i < mx; i++)
        {
            for(int j = 0; j < 30; j++)
            {
                d[i][j] = inf;
            }
        }
   priority_queue <node> q;
   for(int i=0;i<30;i++)
       d[src][i]=0;
   q.push (node(src, 0,29));
   while (!q.empty()) {
      node top = q.top(); q.pop();
      int u = top.city;
      int bilai=top.name;
      for (int i = 0; i < g[u].size(); i++) {
        int v = g[u][i];
        int kutta = road[u][i];
        if((d[u][bilai] + cost[u][i] < d[v][kutta]) && (bilai != kutta)){
            d[v][kutta] = d[u][bilai] + cost[u][i];
            q.push (node (v, d[v][kutta],kutta));
         }
      }
   }
   int ans=d[des][0];
   for( int i=1;i<30;i++){
       ans=min(ans,d[des][i]);
   }
   return ans;
}
int id(string &s)
{
    if(my.find(s) != my.end())
    {
        return my[s];
    }
    int i = my.size();
    my[s] = i;
    return i;
}
int cti(char c)
{
    return c - 'a';
}

int main ()
{
    while(1){
       my.clear();
       for (int i = 0; i < mx; i++) {g[i].clear(); cost[i].clear(); road[i].clear();}
       int  e;
       cin >> e;
       if(e==0)
          break;
       string st,ed;
       cin>>st>>ed;
       for (int i = 1; i <= e; i++) {
          int u, v, w;
          string a,b,ct;
          cin>>a>>b>>ct;
          u=id(a);
          v=id(b);
          w=ct.size();
          int c=cti(ct[0]);
          g[u].push_back (v);
          g[v].push_back(u);
          cost[u].push_back (w);
          cost[v].push_back(w);
          road[u].push_back(c);
          road[v].push_back(c);
       }
       if(my.find(st) == my.end() || my.find(ed) == my.end())
        {
            cout << "impossivel" << endl;
            continue;
        }
       int ret = dijkstra (id(st),id(ed));
       if (ret == inf) cout << "impossivel\n";
       else {
          cout << ret << endl;
       }
    }
   return 0;
}

