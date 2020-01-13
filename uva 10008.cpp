#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int T,i,j,k,len,maximum,pos;
    char c;
    int ara[100]={0};
    char str[1000];
    scanf("%d",&T);
    getchar();
    for(i=1;i<=T;i++){
        gets(str);
        len=strlen(str);
        for(j=0;j<len;j++){
            if(isalpha(str[j])){
                k=str[j];
                if(k>96)
                    k=k-32;
                ara[k]=ara[k]+1;
            }
        }
    }
    for(j=65;j<=90;j++){
       maximum=0;
       for(i=65;i<=90;i++){
           if(ara[i]>maximum){
              pos=i;
              maximum=ara[i];
           }
       }
       if(maximum>0){
          printf("%c %d\n",pos,maximum);
          ara[pos]=0;
       }
    }
    return 0;

}
