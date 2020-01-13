#include <stdio.h>
#include <string.h>
int main()
{
    char str[1010];
    int kutta=1;
    while(gets(str)){
    int ara[300];
    int i;
    for(i=0;i<300;i++){
        ara[i]=0;
    }
    int len=strlen(str);
    int a,j,b;
    for(i=0;i<len;i++){
        a=str[i];
        ara[a]=ara[a]+1;
    }
    b=1;
    if(kutta!=1)
        printf("\n");
    while(b<1002){
        for(j=127;j>=32;j--){
            if(ara[j]==b){
                printf("%d %d\n",j,b);
            }
        }
        b++;
    }
    kutta++;
    }
    return 0;

}

