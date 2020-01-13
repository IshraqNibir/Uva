#include <stdio.h>
#define sz 40000
int ara[sz];
void kap()
{
    int i,j,k,l,rem,div,x,y,z,carry,m,a;
    for(i=2;i<=sz;i++){
        int num[15]={0};int ara1[15]={0};int ans[15]={0};
        a=i*i;k=0;div=a;rem=0;
        while(div>0){
            rem=div%10;
            div=div/10;
            ara1[k]=rem;
            k++;
        }
        for(j=0,l=k-1;l>=0;j++,l--){
            num[j]=ara1[l];
        }
        m=1;
        for(j=m;j<k;j++){
            x=m-1;;y=k-1;z=k-1;
            carry=0;
            while(z>=m){
                if(x<0)
                    num[x]=0;
                ans[y]=num[z]+num[x]+carry;
                if(ans[y]>=10){
                    ans[y]=ans[y]%10;
                    carry=1;
                }
                else
                    carry=0;
                y--;x--;z--;
            }

            m++;
        }
    }

}
