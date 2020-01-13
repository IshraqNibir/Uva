#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
int cnt=0;
int k,n;
char str[105][105];
char dup[105][105];
void DFS(int x,int y){

    if(x < 0 || y < 0 || x == k || y == n)return;
    if(dup[x][y] != 'W')return;
    if(dup[x][y] == 'W')dup[x][y] = 'L';
    cnt++;
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
    int t;
    cin>>t;
    getchar();getchar();
    bool blank=false;
    while(t--)
    {
        char st[150];
        memset(str,0,sizeof(str));
        memset(dup,0,sizeof(dup));
        int i,j;
        k=0;n=0;
        if(blank)
            cout<<endl;
        blank=true;
        while(gets(st)&&strlen(st)>0){
            if(st[0]=='W'||st[0]=='L'){
                strcpy(str[k],st);
                k++;
                n=strlen(st);
            }
            else{
                int r,c;
                sscanf(st,"%d %d",&r,&c);
                for(i=0;i<k;i++)
                    strcpy(dup[i],str[i]);
                cnt=0;
                DFS(r-1,c-1);
                cout<<cnt<<endl;
            }
        }
    }
    return 0;
}
