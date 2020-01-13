#include <stdio.h>
#define mx 210000000
long long ara[mx];
void fun()
{
    long i,j,dif;
    dif=1;
    ara[0]=1;
    for(i=1;i<=mx;i++){
        ara[i]=ara[i-1]+dif;
        dif++;
    }
}
int main()
{
    long a,b;
    fun();
    while(scanf("%ld",&a)==1){
        if(a<0)
        break;
        printf("%lld\n",ara[a]);
    }
    return 0;

}
