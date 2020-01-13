#include <stdio.h>
int fac(int a)
{
    int factorial,i;
    factorial=1;
    for(i=a;i>=1;i--){
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int b,i,d,div,k,c,factoria,count;
    int ara[1000];
    scanf("%d %d",&d,&b);
    factoria=fac(d);
    div=factoria;k=0;count=0;
    while(div!=0){
        c=div%b;
        ara[k]=c;
        if(ara[k]==0)
            count++;
        div=div/b;
        k++;
    }
    printf("%d %d",count,k);
    return 0;
}
