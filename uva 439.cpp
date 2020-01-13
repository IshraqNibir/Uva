#include <bits/stdc++.h>
#define  max 101
using namespace std;
int color[max][max],cost[max][max];
int X[8] = {-1,-1,-2,-2,1,1,2,2};
int Y[8] = {-2,2,-1,1,-2,2,-1,1};
void bfs(int x,int y)
{
    int ux,uy,vx,vy,k;
    queue<int>Q;
    Q.push(x);
    Q.push(y);
    color[x][y] = 1;
    cost[x][y]=0;
    int r=0;
    while(!Q.empty())
    {
        ux = Q.front();
        Q.pop();
        uy = Q.front();

        Q.pop();

        for(k=0; k<8; k++)
        {
            vx = ux+X[k];
            vy = uy+Y[k];

            if((vx>=1&&vx<=8) && (vy>=1&&vy<=8))
            {
                if(!color[vx][vy])
                {
                    color[vx][vy]=1;

                    Q.push(vx);
                     Q.push(vy);

                    cost[vx][vy]=cost[ux][uy]+1;

                }
            }
         }
    }

}
int main()
{
    int s,s1,e,e1;
    string a,b;
    while(cin>>a)
    {
        cin>>b;
        memset(color,0,sizeof(color));
        memset(cost,0,sizeof(cost));
        s1=a[0]-96;
        s=a[1]-48;
        bfs(s,s1);
        e1=b[0]-96;
        e=b[1]-48;
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<cost[e][e1]<<" knight moves."<<endl;
    }
    return 0;
}


