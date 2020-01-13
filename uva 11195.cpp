#include <iostream>
#include <cstdio>
using namespace std;
int queen[1500],colum[1500],diagonal1[1500],diagonal2[1500],wrong[150][150];
int yes=0;
void nqueen(int a,int n)
{
    int i,mount;
   // mount=0;
    if(a==n+1)
    {
        mount=0;
        for(i=1;i<=n;i++){
            if(wrong[i][queen[i]]==1)
               break;
            mount++;
        }
        if(mount==n)
            yes++;
        return;
    }
    for(i=1;i<=n;i++){
        if(colum[i]||diagonal1[i+a]||diagonal2[n+i-a])
            continue;
        queen[a]=i;
        colum[i]=diagonal1[i+a]=diagonal2[n+i-a]=1;
        nqueen(a+1,n);
        colum[i]=diagonal1[i+a]=diagonal2[n+i-a]=0;
    }
}
void klear()
{
    int i,j;
    for(i=0;i<1500;i++){
        diagonal1[i]=0;
        diagonal2[i]=0;
    }
    for(i=0;i<1500;i++){
        colum[i]=0;
        queen[i]=0;
    }
    for(i=0;i<150;i++){
        for(j=0;j<150;j++){
            wrong[i][j]=0;
        }
    }
    yes=0;
}
int main()
{
    int k=1;
    while(1)
    {
        klear();
        int t;
        cin>>t;
        getchar();
        if(t==0)
            break;
        char ch;
        int i,j;
        for(i=1;i<=t;i++){
            for(j=1;j<=t;j++){
                cin>> ch;
                if(ch=='*')
                   wrong[i][j]=1;
            }
            getchar();
        }
        nqueen(1,t);
        printf("Case %d: %d\n",k,yes);
        k++;
    }
}
