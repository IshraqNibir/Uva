#include <stdio.h>
#include <string.h>
int main()
{
     char str[100000][100000];
     char str1[100000][100000];
     long i,j,m,k,b,len;
     i=0;k=1;
     while(gets(str[i])){
          len=strlen(str[i]);
          b=0;
          for(m=0;m<len;m++){
              if(str[i][m]=='"' && k%2!=0){
                  str1[i][b]='`';
                  str1[i][b+1]='`';
                  k++;
                  b=b+2;
              }
              else if(str[i][m]=='"' && k%2==0){
                  str1[i][b]='\'';
                  str1[i][b+1]='\'';
                  k++;
                  b=b+2;
              }
              else{
                  str1[i][b]=str[i][m];
                  b=b+1;
              }
          }
          i++;
     }
     for(j=0;j<i;j++){
         printf("%s\n",str1[j]);
     }
     return 0;
}
