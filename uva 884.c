#include <stdio.h>
#include <math.h>
#define sz 1000000
int ara[sz];
int ans[sz];
void sieve()
{
    int i,j,root;
    for(i=2;i<=sz;i++){
        ara[i]=1;
    }
    root=sqrt(sz);
    for(i=2;i<=root;i++){
        if(ara[i]==1){
            for(j=2;i*j<=sz;j++){
                ara[i*j]=0;
            }
        }
    }
}
void pre()
{
    int n,i,j;
    sieve();
    ans[1]=0;
    for(i=2;i<=sz;i++){
        ans[i]=ans[i-1];j=2;n=i;
        if(ara[n]==1)
            ans[i]++;
        else{
            while(1){
                if(ara[n]==1){
                    ans[i]++;
                    break;
                }
                if(ara[j]==1){
                   if(n%j==0){
                       n=n/j;
                       ans[i]++;
                   }
                   else
                       j++;
                }
                else
                    j++;
           }
       }
    }
}
int main()
{
    pre();
    int n;
    while(scanf("%d",&n)==1){
    printf("%d\n",ans[n]);
    }
    return 0;
}

