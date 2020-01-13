#include <iostream>
#include <cstdio>
using namespace std;
int m,n;
int cnt=0;
char str[1002][1002];
void DFS(int x,int y){

    if(x < 0 || y < 0 || x == m || y == n)return;
    if(str[x][y] != '1')return;
    if(str[x][y] == '1')str[x][y] = '0';
    DFS(x,y+1);
    DFS(x,y-1);
    DFS(x+1,y);
    DFS(x-1,y);
    DFS(x+1,y+1);
    DFS(x+1,y-1);
    DFS(x-1,y+1);
    DFS(x-1,y-1);
}
int main()
{
    int kase=1;
    while(scanf("%d",&n)==1){
    m=n;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>str[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(str[i][j]=='1'){
                DFS(i,j);
                cnt++;
            }
        }
    }
    printf("Image number %d contains %d war eagles.\n",kase,cnt);
    cnt=0;
    kase++;
    }
    return 0;
}
