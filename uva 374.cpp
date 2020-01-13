#include<stdio.h>
long bigmod(long a,long p,long m);
int main()
{
      long B,P,M;
      long a;
      while(scanf("%ld %ld %ld",&B,&P,&M)==3){
      a=bigmod(B,P,M);
      printf("%ld\n",a);
      }

      return 0;
}

long bigmod(long a,long p,long m)
{
      if(p==0)
      return 1;

      if(p%2==0){
      long c=bigmod(a,p/2,m);
      return (c*c)%m;
      }
      else
      return (a%m*bigmod(a,p-1,m)) %m;

}

