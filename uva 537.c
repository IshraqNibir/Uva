#include <stdio.h>
int main()
{
    int i,j,l,cur,vol,pow,Test,t;
    scanf("%d",&Test);
    getchar();
    for(t=1;t<=Test;t++){
    double k,P,I,V,ans;
    char ch;
    char a[100000];
    i=0;l=0;cur=0;vol=0;pow=0;
    while(1)
    {
        scanf("%c",&a[i]);
        if(a[i]=='\n')
            break;
        if(a[i]=='='){
            scanf("%lf%c",&k,&ch);
            if(a[i-1]=='I'){
                I=k;
                cur=1;
                if(ch=='m')
                    I=.001*I;
                else if(ch=='k')
                    I=1000*I;
                else if(ch=='M')
                    I=1000000*I;

            }
            if(a[i-1]=='U'){
                V=k;
                vol=1;
                if(ch=='m')
                    V=.001*V;
                else if(ch=='k')
                    V=1000*V;
                else if(ch=='M')
                    V=1000000*V;

            }
            if(a[i-1]=='P'){
                P=k;
                pow=1;
                if(ch=='m')
                    P=.001*P;
                else if(ch=='k')
                    P=1000*P;
                else if(ch=='M')
                    P=1000000*P;

            }
            l=1;
        }
         i++;
    }
    if(cur==1&&vol==1){
        ans=V*I;
         printf("Problem #%d\n",t);
         printf("P=%.2lfW\n",ans);
    }
    else if(cur==1&&pow==1){
         if(I==0)
             ans=0;
         else
             ans=P/I;
         printf("Problem #%d\n",t);
         printf("U=%.2lfV\n",ans);
    }
    else{
        if(V==0)
            ans=0;
        else
            ans=P/V;
        printf("Problem #%d\n",t);
        printf("I=%.2lfA\n",ans);
    }
    printf("\n");
    }
    return 0;
}
