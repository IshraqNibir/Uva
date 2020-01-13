#include <stdio.h>
#include <string.h>
int main()
{
    char str[130];
    char a;
    int i,j,cnt,mount,n,len,fine,good;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++){
        gets(str);
        len=strlen(str);
        cnt=0;mount=0;

        for(j=0;j<len;j++){
            if(str[j]=='('){
               fine=1;
               break;
            }
            if(str[j]==')'){
                fine=0;
                break;
            }
        }
        for(j=0;j<len;j++){
            if(str[j]=='['){
               good=1;
               break;
            }
            if(str[j]==']'){
                good=0;
                break;
            }
        }
        if(fine==1&&good==1){
            for(j=0;j<len;j++){
                if(str[j]=='(')
                   cnt++;
                if(str[j]==')')
                    cnt--;
                if(str[j]=='[')
                    mount++;
                if(str[j]==']')
                    mount--;
            }
            if(cnt==0&&mount==0)
                printf("yes\n");
            else
                printf("no\n");
        }
        else
            printf("no\n");
    }
    return 0;

}
