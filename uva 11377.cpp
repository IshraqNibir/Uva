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
#define mx 2005
#define inf 1000000000
vector <int > g[mx];
vector <int > cost[mx];
int d[mx]; int ace[mx];
struct node {
   int city, dist;
   node (int a, int b) { city = a; dist = b;}
   bool operator < (const node& p) const {
      return p.dist < dist;
   } //its used for priority queue..
};
int dijkstra (int src, int des) {
   for (int i = 0; i < mx; i++){
        d[i] = inf; //setting distance with a large value..
   }
   priority_queue <node > q;
   if(ace[src]==1){
      d[src] = 0;
      q.push (node(src, 0));
   }
   else{
      d[src]=1;
      q.push (node(src, 1));
   }
   int flag,cst;
   while (!q.empty()) {
      node top = q.top(); q.pop();
      int u = top.city;
      flag=0;
      if(ace[u]==1)
        flag=1;
      if (u == des) return d[u];
      for (int i = 0; i < g[u].size(); i++) {
         int v = g[u][i];
         cst=cost[u][i];
         if(flag==0)
            cst--;
         if (d[u] + cst < d[v]) {
            d[v] = d[u] + cst;
            q.push (node (v, d[v]));
         }
      }
      //cout<<"Y"<<endl;
   }
   return -1;
}
int main ()
{
   int t,kase;
   kase=1;
   cin>>t;
   while(t--){
       int n,m,k,a,q;
       memset(ace,0,sizeof(ace));
       cin >> n >> m >> k;
       while(k--){
           cin>>a;
           ace[a]=1;
       }
       for (int i = 0; i < m; i++) {
           int u, v, w;
           w=0;
           cin >> u >> v ;
           g[u].push_back (v);
           g[v].push_back (u);
           if(ace[u]==0)
              w++;
           if(ace[v]==0)
              w++;
           cost[u].push_back (w);
           cost[v].push_back (w);
       }
       vector<int>v;
       cin>>q;
       while(q--){
           int b,d;
           cin>>b>>d;
           if(b==d)
           {
               v.push_back(0);
               continue;
           }
           int ret=dijkstra(b,d);
           v.push_back(ret);
       }
       printf("Case %d:\n",kase++);
       for(int i=0;i<v.size();i++)
           cout<<v[i]<<endl;
       cout<<endl;
       for (int i = 0; i < mx; i++) {g[i].clear(); cost[i].clear();}
   }
   return 0;
}

