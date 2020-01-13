#include <stdio.h>
#include <string.h>
int main()
{
    char str[1005];
    while(gets>>str){
    int ara[10005]={0};
    int len=strlen(str);
    int a,i,j,b;
    for(i=0;i<len;i++){
        a=str[i];
        ara[a]=ara[a]+1;
    }
    b=1;
    for(i=128;i>=33;i--){
        for(j=128;j>=33;j--){
            if(ara[j]==b){
            printf("%d %d\n,j,b);
            }
        }
        b++;
    }
    printf("\n");
    }
    return 0;

}

