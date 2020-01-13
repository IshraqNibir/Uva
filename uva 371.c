#include <stdio.h>
int rec(int n)
{
    if(n==1){
        return n-1;
    }
    else if(n%2==0){
        n=1+rec(n/2);
    }
    else{
        n=1+rec(3*n+1);
    }
}
#define sz 100000000
int ara[sz],max,num;
void fun(int p,int q)
{
    int d,temp,b,m,c,i;
      if(p>q){
        temp=q;
        c=p;
        p=temp;
    }
    d=q-p+10;
    m=0;
    for(i=p;i<=q;i++){
        b=rec(i);
        ara[m]=b;
        if(ara[m]>max){
            max=ara[m];
            num=i;
        }
        m++;
    }

}

int main()
{
    int a,c;
    while(scanf("%d %d",&a,&c)==2){
        if(a==0&&c==0){
            break;
        }
    fun(a,c);
    printf("Between %d and %d, %d generates the longest sequence of %d values.\n",a,c,num,max);
    }
    return 0;

}
