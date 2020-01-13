#include <iostream>
#include <cstdio>
using namespace std;
int m,n;
char str[1002][1002];
char ch;
void DFS(int x,int y){

    if(x < 0 || y < 0 || x == m || y == n)return;
    if(str[x][y] != ch)return;
    if(str[x][y] == ch)str[x][y] = '*';
    DFS(x,y+1);
    DFS(x,y-1);
    DFS(x+1,y);
    DFS(x-1,y);
    //DFS(x+1,y+1);
    //DFS(x+1,y-1);
    //DFS(x-1,y+1);
    //DFS(x-1,y-1);
}
int main()
{
    int t,kase;
    cin>>t;
    kase=1;
    while(t--)
    {
        int ara[200],z,i;
        for(i=0;i<200;i++)
            ara[i]=0;
        cin>>m>>n;
        int j;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                cin>>str[i][j];
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(str[i][j]!='*'){
                    ch=str[i][j];
                    DFS(i,j);
                    z=ch;
                    ara[z]=ara[z]+1;
                }
            }
        }
        //char ch1;
        cout<<"World #"<<kase<<endl;
        kase++;
        //int maximum=0;
        //int a;
        for(j=90;j<125;j++){
                int maximum=0;
                int a;
                char ch1;
        for(i=90;i<125;i++){
            if(ara[i]>=maximum){
                if(ara[i]>maximum){
                    maximum=ara[i];
                    ch1=i;
                    a=i;
                }
                else if(ara[i]==maximum)
                {
                    if(i<a){
                       a=i;
                       ch1=i;
                    }
                }
            }
            //cout<<ch1<<": "<<ara[i]<<endl;
        }
        if(maximum!=0){
            cout<<ch1<<": "<<maximum<<endl;
            ara[a]=0;
        }
    }
    }
    return 0;
}

