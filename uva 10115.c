#include <stdio.h>
#include <string.h>
int main()
{
    int num,m,l,i,j,k,size,n,len,len1,len2,a,len3,s,lenr,ok;
    while(scanf("%d",&num)==1){
            if(num==0)
            break;
    char ma[20][90],rep[20][90],str[1000],ans[1000];
    getchar();
    for(i=0;i<num;i++){
        gets(ma[i]);
        gets(rep[i]);
    }
    gets(str);
    len=strlen(str);
    n=0;
    while(n<num){
            i=0;ok=0;
    while(i<len){
            k=0;
        if(str[i]==ma[n][k]){
            len1=strlen(ma[n]);
            for(j=i;j<i+len1;j++){
                if(str[j]==ma[n][k])
                   k++;
            }
            if(k==len1){
                    m=0;
               for(j=0;j<i;j++){
                   ans[j]=str[j];
                   m++;
               }
               len2=strlen(rep[n]);
               l=0;
               for(j=m;j<m+len2;j++){
                   ans[j]=rep[n][l];
                   l++;
               }
               a=i+k;
               for(j=m+l;j<(m+l)+len-(i+len1);j++){
                   ans[j]=str[a];
                   a++;
               }
               ans[j]='\0';
               len3=strlen(ans);
               for(j=0;j<len3;j++){
                   str[j]=ans[j];
               }
               str[j]='\0';
               len=strlen(str);
               i=0;
               continue;
            }

        }
        i++;
    }
    n++;
    }
    printf("%s\n",str);
    }
    return 0;

}
