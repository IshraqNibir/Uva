#include <stdio.h>
int main()
{
   long long T,f,i,j,k;
   scanf("%lld",&T);
   for(i=1;i<=T;i++){
       long long ara[5010];
       scanf("%lld",&f);
       ara[0]=0;ara[1]=1;k=1;
       for(j=2;j<=f;j++){
           ara[j]=ara[j-1]+ara[j-2];
           k++;
       }
       printf("The Fibonacci number for %lld is %lld\n",f,ara[k]);
   }
   return 0;

}
