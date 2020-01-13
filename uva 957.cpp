#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int ara[1000010],cum[1000010];
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a,i,maxi,b,j,k;
        memset(ara,0,sizeof(ara));
        memset(cum,0,sizeof(cum));
        scanf("%d",&a);
        maxi=0;
        while(a--)
        {
            scanf("%d",&b);
            ara[b]++;
            if(b>maxi)
                maxi=b;
        }
        cum[0]=ara[0];
        for(i=1;i<=maxi;i++)
            cum[i]=ara[i]+cum[i-1];
        int start,ed,number,temp;
        number=0;
        for(i=n;i<=maxi;i++){
            temp=cum[i]-cum[i-n];
            if(temp>number){
                number=temp;
                ed=i;
                start=ed-n+1;
            }
        }
        int fstart,fed;
        for(i=start;i<ed;i++){
            if(ara[i]!=0){
                fstart=i;
                break;
            }
        }
        for(i=ed;i>fstart;i--){
            if(ara[i]!=0){
                fed=i;
                break;
            }
        }
       printf("%d %d %d\n",number,fstart,fed);
    }
    return 0;
}
