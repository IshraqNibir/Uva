#include <bits/stdc++.h>
using namespace std;
#define mx 255
#define inf 1000000000
vector <int > g[mx];
vector <int > cost[mx];
int d[mx]; int par[mx];
int c;
struct node {
   int city, dist;
   node (int a, int b) { city = a; dist = b;}
   bool operator < (const node& p) const {
      return p.dist < dist;
   } //its used for priority queue..
};
void dijkstra (int src,int des) {
   for (int i = 0; i < mx; i++){
        d[i] = inf; //setting distance with a large value..
   }
   memset (par, -1, sizeof (par));
   priority_queue <node > q;
   d[src] = 0;
   q.push (node(src, 0));
   while (!q.empty()) {
      node top = q.top(); q.pop();
      int u = top.city;
      if (u == des) return;
      for (int i = 0; i < g[u].size(); i++) {
         int v = g[u][i];
         if (d[u] + cost[u][i] < d[v]) {
            d[v] = d[u] + cost[u][i];
            if(v>=c)
                q.push (node (v, d[v]));
         }
      }
   }
}
int main ()
{
   while(1){
   int n, e, k;
   int seq[255][255];
   memset(seq,0,sizeof(seq));
   cin >> n >> e >> c >> k;
   if(n==0 && e==0 && c==0 && k==0)
       break;
   for (int i = 0; i < e; i++) {
      int u, v, w;
      cin >> u >> v >> w;
      seq[u][v]=w;
      seq[v][u]=w;
      g[u].push_back (v);
      g[v].push_back (u);
      cost[u].push_back (w);
      cost[v].push_back (w);
   }
   dijkstra (k, c-1);
   int ans=d[c-1];
   for(int i=0;i<c-1;i++){
       int fans=0;
       if(d[i]!=inf){
           fans=d[i];
           for(int j=i;j<c-1;j++)
               fans=fans+seq[j][j+1];
            if(fans<ans)
               ans=fans;
       }
   }
   cout<<ans<<endl;
   for (int i = 0; i < mx; i++) {g[i].clear(); cost[i].clear();}
   }
   return 0;
}

