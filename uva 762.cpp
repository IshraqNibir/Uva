#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<queue>
#include<vector>
#include<map>
using namespace std;
string source,destination;
int root[1000001],t,s;
  map<int,string>you;
void finding_path(int node)
{
    if(you[root[node]]!=you[s])
    {
        finding_path(root[node]);
      cout<<you[root[node]]<<" "<<you[node]<<endl;
    }
    else
         cout<<you[root[node]]<<" "<<you[node]<<endl;
}
int main()
{
    //freopen("c:\\temp\\in.txt","r",stdin);
 int links;
 int p=0;
 while(scanf("%d",&links)==1)
  {
      if(p!=0)cout<<endl;p++;
     map<string,int>my;
     string u,v;
     vector<int>graph[110000];
     int j=1;
     for(int i=1;i<=links;i++)
     {
         cin>>u>>v;
        if(my[u]==0)
        {
            my[u]=j;you[j]=u;j++;
        }
        if(my[v]==0)
        {
            my[v]=j;
            you[j]=v;j++;
        }
        graph[my[u]].push_back(my[v]);
        graph[my[v]].push_back(my[u]);
     }

     cin>>source>>destination;
      //cout<<links<<" "<<source<<" "<<destination<<endl;
      queue<int>q;
      q.push(my[source]);
       t=my[destination];
      int visit[100001];memset(visit,0,sizeof visit);
      visit[my[source]]=1;s=my[source];
      int check=0;
      root[t]=0;
      int pop;
      while(!q.empty())
      {
          pop=q.front();q.pop();
          if(pop==t)
             {
                 check=1;//break;
             }
         for(int i=0;i<graph[pop].size();i++)
         {
             int v=graph[pop][i];
             if(visit[v]==0)
             {
                 root[v]=pop;
                 q.push(v);visit[v]=1;
             }
         }
      }
      if(check==0||root[t]==0)
      {
          printf("No route\n");
      }
      else
      {
          //if(source!=destination)
         finding_path(my[destination]);
      }

  }
  return 0;
}
