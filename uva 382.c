#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,i,j,k,m,c;
    int ara[110];
    char name[110][20];
    k=0;
    while(1){
        scanf("%d",&a);
        if(a==0)
            break;
        ara[k]=a;
        k++;
    }
    for(i=0;i<k;i++){
        m=0;c=0;
        for(j=1;j<=ara[i]/2;j++){
            if(ara[i]%j==0){
                c=c+j;
            }
        }
        if(c==ara[i])
            strcpy(name[i],"PERFECT");
        else if(c<ara[i])
            strcpy(name[i],"DEFICIENT");
        else
            strcpy(name[i],"ABUNDANT");
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0;i<k;i++){
        printf("%5d  %s\n",ara[i],name[i]);
    }
    printf("END OF OUTPUT\n");
    return 0;

}
