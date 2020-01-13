#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,i,j,k,c,mount;
    int ara[130]={0};
    char str[130];
    scanf("%d",&a);
    getchar();
    for(i=1;i<=a;i++){
        int ara[128]={0};
        gets(str);
        b=strlen(str);
        mount=0;
        for(j=0;j<b;j++){
            if(str[j]=='('||str[j]==')'||str[j]=='['||str[j]==']'){
            mount++;
            break;
            }
        }
        if(mount==0){
            printf("Yes\n");
            continue;
        }
        if(b%2==1){
            printf("No\n");
            continue;
        }
        for(j=0;j<b;j++){
            if(str[j]=='('||str[j]=='[')
               ara[j]=1;
        }
        c=0;
        for(j=0;j<b;j++){
            if(str[j]==')'){
            for(k=j-1;k>=0;k--){
                if(ara[k]==1){
                if(str[k]=='('){
                    ara[k]=0;
                    c=1;
                }
                else{
                    printf("No\n");
                    c=2;
                }
                break;
                }
                if(k==0){
                    c=2;
                    printf("No\n");
                    break;
                }
            }
            }
            if(c==2)
                break;
            if(str[j]==']'){
                for(k=j-1;k>=0;k--){
                    if(ara[k]==1){
                        if(str[k]=='['){
                            ara[k]=0;
                            c=1;
                        }
                        else{
                            printf("No\n");
                            c=2;
                        }
                        break;
                    }
                    if(k==0){
                        c=2;
                        printf("No\n");
                        break;
                    }
                }
            }
            if(c==2)
                break;
        }
        if(c==0){
            printf("No\n");
            continue;
        }
        if(c==2)
            continue;
        int count=0;
        for(j=0;j<b;j++){
            if(ara[j]==0)
            count++;
        }
        if(count==b){
            printf("Yes\n");
            continue;
        }
        else{
            printf("No\n",count);
            continue;
        }
        if(c==0)
            printf("No\n");
    }
     return 0;



}
