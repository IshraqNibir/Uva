#include <stdio.h>
#include <string.h>
int ara[1000005];
char str1[1000005][20];
int main()
{
    int a,b,i,j,k,len;
    char str[1000005];
    while(scanf("%d %s",&a,&str)==2){
    len=strlen(str);
    for(i=0;i<=len-a;i++){
        k=0;
        for(j=i;j<=i+a-1;j++){
            str1[i][k]=str[j];
            k++;
        }
        str1[i][k]='\0';
    }
    for(i=0;i<=len-a;i++){
        for(j=i+1;j<=len-a;j++){
            if(strcmp(str1[i],str1[j])==0)
            ara[i]=ara[i]+1;
        }
    }
    int max=0;int pos=0;
    for(i=0;i<=len-a;i++){
        if(ara[i]>max){
           max=ara[i];
            pos=i;
        }
    }
    printf("%s\n",str1[pos]);
    memset(ara,0,sizeof(ara));
    }
    return 0;
}
