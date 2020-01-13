#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;
int m,n;
int cnt=0;
char str[100][100];
int ara[100];
char ch;
void DFS(int x,int y){

    if(x < 0 || y < 0 || x == m || y == n)return;
    if(str[x][y] != ch)return;
    if(str[x][y] == ch)str[x][y] = '.';
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
    int kase=1;
    while(scanf("%d %d",&m,&n)==2)
    {
        if(m==0 && n==0)
            break;
        vector<int>my;
        vector<int>ms;
        memset(ara,0,sizeof(ara));
        memset(str,0,sizeof(str));
        int i,j,k,l;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>str[i][j];
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cnt=0;
                if(str[i][j]!='.'){
                    ch=str[i][j];
                    DFS(i,j);
                    //cout<<cnt<<endl;
                    k=ch;
                    my.push_back(cnt);
                    ms.push_back(k);
                }
            }
        }
        printf("Problem %d:\n",kase);
        char ch1;
        int maximum,maximumch;
        for(i=0;i<my.size();i++){
                maximum=0;
                maximumch=100;
            for(j=0;j<my.size();j++){
                if(my[j]>=maximum){
                    if(my[j]==maximum&&ms[j]<maximumch){
                        maximum=my[j];
                        maximumch=ms[j];
                        //cout<<maximum<<" "<<maximumch<<endl;
                        l=j;
                    }
                    else if(my[j]>maximum){
                        maximum=my[j];
                        maximumch=ms[j];
                        //cout<<maximum<<" "<<maximumch<<endl;
                        l=j;
                    }
                }
            }
            printf("%c %d\n",maximumch,maximum);
            my[l]=0;
        }
        kase++;
    }
    return 0;
}
