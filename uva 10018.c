#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,i,j,len,m,c,n,t,count,k,test;
    scanf("%d",&test);
    getchar();
    for(t=1;t<=test;t++){
    char str[100],str1[100];
    int ara[100],ara1[100];
    int ara2[100];
    gets(str);
    count=0;
    while(1){
    len=strlen(str);
    for(i=len-1,j=0;i>=0;i--,j++){
        str1[j]=str[i];
    }
    str1[j]='\0';
    if(count>0 && strcmp(str1,str)==0){
        printf("%d %s\n",count,str);
        break;
    }
    else{
        k=0;
        for(i=len-1;i>=0;i--){
            ara[i]=str[i]-48;
            ara1[i]=str1[i]-48;
            k++;
        }
        b=0;m=k;
        ara2[0]=0;
        for(i=k;i>=0;i--){
            if(i==0){
                if(b>0){
                    ara2[m]=b;
                }
                else
                    m++;
                continue;
            }
            c=ara[i-1]+ara1[i-1]+b;
            if(c<=9){
                ara2[m]=c;
                    b=0;
            }
            else{
                b=c/10;
                a=c%10;
                ara2[m]=a;
            }
            m--;
        }
        n=0;
        if(ara2[0]==0)
            n=1;
        for(i=0;n<=k;i++){
            str[i]=ara2[n]+48;
            n++;
        }
        str[n]='\0';
        count++;
    }
    }
    }
    return 0;


}

