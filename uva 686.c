#include <stdio.h>
#define sz 35000
int ara[sz];
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
int main()
{
    int a,b,i,count,mount;
    sieve();
    while(scanf("%d",&a)==1){
        if(a==0)
        break;
    count=0;mount=0;
    for(i=a-2;i>=2;i--){
        if(ara[i]==1 && ara[a-i]==1){
            if(i==a-i){
                mount++;
                continue;
            }
            count++;
        }
    }
    b=(count/2)+mount;
    printf("%d\n",b);
    }
    return 0;
}
