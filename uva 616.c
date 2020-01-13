#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,k,l,ori,count;
    while(scanf("%d",&n)==1){
        if(n<0)
        break;
        if(n==3){
           printf("3 coconuts, 2 people and 1 monkey\n");
           continue;
        }
    k=sqrt(n);count=0;
    for(i=k;i>=2;i--){
        ori=n;
        l=0;j=0;
        while(ori%i==1){
            l++;
            j=ori/i;
            ori=n-(j+1);
        }
        if(l==i&&ori%i==0){
            printf("%d coconuts, %d people and 1 monkey\n",n,l);
            count=1;
            break;
        }
    }
    if(count==0){
        printf("%d coconuts, no solution\n",n);
    }
    }
    return 0;
}
