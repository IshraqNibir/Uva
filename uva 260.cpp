#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
int m,n;
bool ans;
char str[1002][1002];
void DFS(int x,int y){

    if(x < 0 || y < 0 || x == m || y == n)return;
    if(x==0)
        ans=true;
    if(str[x][y] != 'b')return;
    if(str[x][y] == 'b')str[x][y] = 'w';
    DFS(x,y+1);
    DFS(x,y-1);
    DFS(x+1,y);
    DFS(x-1,y);
    DFS(x+1,y+1);
    //DFS(x+1,y-1);
    //DFS(x-1,y+1);
    DFS(x-1,y-1);
}
int main()
{
    int kase=1;
    while(scanf("%d",&m)==1){
        if(m==0)
            break;
        ans=false;
        n=m;
        int i,j;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>str[i][j];
            }
        }
        for(i=0;i<n;i++){
            if(str[m-1][i]=='b')
                DFS(m-1,i);
        }
        if(ans==true)
            cout<<kase<<" "<<"B"<<endl;
        else
            cout<<kase<<" "<<"W"<<endl;
        kase++;
        memset(str,0,sizeof(str));
    }
    return 0;
}
