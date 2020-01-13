#include <stdio.h>
#include <string.h>
int main()
{
    while(1){
    int T,i,j,k,b,len;
    char ara[10][10]={"i","ii","iii","iv","v","vi","vii","viii","ix","x"};
    int num[5]={14,5,0,0,0};
    scanf("%d",&T);
    if(T==0)
        break;
    if(T==100)
        printf("%d: 140 i, 50 v, 150 x, 50 l, 11 c\n",T);
    else if(T<=10){
         num[0]=0;
         num[1]=0;
         num[2]=0;
         for(i=0;i<T;i++){
            len=strlen(ara[i]);
            for(j=0;j<len;j++){
                if(ara[i][j]=='i')
                    num[0]=num[0]+1;;
                if(ara[i][j]=='v')
                    num[1]=num[1]+1;
                if(ara[i][j]=='x')
                    num[2]=num[2]+1;
            }
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",T,num[0],num[1],num[2],num[3],num[4]);
    }
    else if(T>10&&T<40){
        k=T/10;
        b=T%10;
        if(k==1)
            num[2]=2+b*k;
        if(k==2)
            num[2]=14+b*k;
        if(k==3)
            num[2]=36+b*k;
        num[0]=k*num[0];
        num[1]=k*num[1];
        for(i=0;i<b;i++){
            len=strlen(ara[i]);
            for(j=0;j<len;j++){
                if(ara[i][j]=='i')
                    num[0]=num[0]+1;;
                if(ara[i][j]=='v')
                    num[1]=num[1]+1;
                if(ara[i][j]=='x')
                    num[2]=num[2]+1;
            }
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",T,num[0],num[1],num[2],num[3],num[4]);
    }
    else if(T>=40&&T<50){
        b=T%10;
        num[0]=4*num[0];
        num[1]=4*num[1];
        num[3]=b+1;
        num[2]=65;
        for(i=0;i<b;i++){
            len=strlen(ara[i]);
            for(j=0;j<len;j++){
                if(ara[i][j]=='i')
                    num[0]=num[0]+1;
                if(ara[i][j]=='v')
                    num[1]=num[1]+1;
                if(ara[i][j]=='x')
                    num[2]=num[2]+1;
            }
        }
        num[2]=num[2]+b;
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",T,num[0],num[1],num[2],num[3],num[4]);
    }
    else if(T==50)
        printf("%d: 70 i, 25 v, 75 x, 11 l, 0 c\n",T);
    else if(T>50&&T<90){
        k=T/10;
        b=T%10;
        num[0]=k*num[0];
        num[1]=k*num[1];
        num[2]=75;
        if(k==5)
            num[2]=num[2];
        if(k==6)
            num[2]=num[2]+2+b*1;
        if(k==7)
            num[2]=num[2]+14+b*2;
        if(k==8)
            num[2]=num[2]+36+b*3;
        for(i=0;i<b;i++){
            len=strlen(ara[i]);
            for(j=0;j<len;j++){
                if(ara[i][j]=='i')
                    num[0]=num[0]+1;
                if(ara[i][j]=='v')
                    num[1]=num[1]+1;
                if(ara[i][j]=='x')
                    num[2]=num[2]+1;
            }
        }
        num[3]=T-39;
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",T,num[0],num[1],num[2],num[3],num[4]);
    }
    else if(T>=90&&T<100){
        b=T%10;
        num[0]=9*num[0];
        num[1]=9*num[1];
        num[2]=140+b;
        num[3]=50;
        num[4]=T-89;
        for(i=0;i<b;i++){
            len=strlen(ara[i]);
            for(j=0;j<len;j++){
                if(ara[i][j]=='i')
                    num[0]=num[0]+1;
                if(ara[i][j]=='v')
                    num[1]=num[1]+1;
                if(ara[i][j]=='x')
                    num[2]=num[2]+1;
            }
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",T,num[0],num[1],num[2],num[3],num[4]);
    }
    }
    return 0;






}
