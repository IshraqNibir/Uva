#include <stdio.h>
int main()
{
    int a,b,p,k,i;int ara[100000];
    while(scanf("%d %d",&a,&b)==2){
    p=0;k=0;ara[0]=0;
    for(i=1;i<b;i++){
        p=(p+a)%b;
        ara[i]=p;
        if(ara[i]==0){
            printf("%10d%10d    Bad Choice\n\n",a,b);
            k=1;
            break;
        }
    }
    if(k==0){
        printf("%10d%10d    Good Choice\n\n",a,b);
    }
    }
    return 0;
}
