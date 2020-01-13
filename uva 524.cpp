#include <bits/stdc++.h>
using namespace std;
int ara[17],cr[17],ok[17];
int n,incr=1;
void prim()
{
    memset(ara,0,sizeof(ara));
    ara[2]=1;ara[3]=1;ara[5]=1;ara[7]=1;ara[11]=1;ara[13]=1;
}
void rec(int cnt)
{
    int i,prvs,x;
    if(cnt>n)
       return;
    prvs=incr-1;
    for(i=2;i<=n;i++)
    {
        x=cr[prvs]+i;
        if(ara[x]==1 && ok[i]==0){
            cr[incr]=i;
            //cout<<incr<<endl;
            ok[i]=1;
            incr++;
            if(incr==n){
                for(i=0;i<14;i++)
                    cout<<cr[i]<<endl;
                //return;
            }
            rec(i+1);
            if(incr==n)
                return;
            ok[i]=0;
            incr--;
        }
    }
}
int main()
{
    prim();
    memset(ok,0,sizeof(ok));
    cr[0]=1;
    cin>>n;
    rec(2);
    //for(int i=0;i<16;i++)
      // cout<<cr[i]<<endl;
    return 0;
}
