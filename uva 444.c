#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[1000];
    while(gets(str)){
    char str1[1000];
    int ara[1000];
    int i,j,k,l,b,len,c,m,g;
    len=strlen(str);
    k=0;m=0;
    if(isdigit(str[0])){
        for(i=len,j=0,i>=0;i--;j++){
            str1[j]=str[i];
        }
        for(i=0;i<len;i=k){
            if(str1[k]=='1'&&str1[k+1]=='0'){
                b=str1[k]-48;
                c=str1[k+2]-48;
                ara[m]=100+c;
                m++;
                k=k+3;
            }
            else if(str1[k]=='1'&&str1[k+1]=='1'){
                c=str1[k+2]-48;
                ara[m]=110+c;
                m++;
                k=k+3;
            }
            else if(str1[k]=='1'&&str1[k+1]=='2'){
                c=str1[k+2]-48;
                ara[m]=120+c;
                m++;
                k=k+3;
            }
            else{
                b=str1[k]-48;
                c=str1[k+1]-48;
                ara[m]=b*10+c;
                k=k+2;
                m++;
            }
        }
        for(i=0;i<m;i++){
            printf("%c",ara[i]);
        }
    }
    else{
    for(i=0;i<len;i++){
        b=str[i];
        ara[k]=b/10;
        if(ara[k]/10!=0){
            c=ara[k];
            ara[k]=c/10;
            ara[k+1]=c%10;
            ara[k+2]=b%10;
            k=k+3;
            continue;
        }
        ara[k+1]=b%10;
        k=k+2;;
    }
    for(i=k-1;i>=0;i--){
        printf("%d",ara[i]);
    }
    }
    printf("\n");
    }
    return 0;



}
