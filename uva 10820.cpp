#include <bits/stdc++.h>
using namespace std;
int ara[50005];
int phi(int n)
{
    int ret=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            ret-=ret/i;
        }
    }
    if(n>1)
    {
        ret-=ret/n;
    }
    return ret;
}
void phi()
{
    ara[1]=1;
    for(int i=2;i<=50000;i++)
    {
        int st=phi(i);
        ara[i]=ara[i-1]+st;
    }
}
int main()
{
    phi();
    while(1)
    {
        int a;
        cin>>a;
        if(a==0)
            break;
        int ans=ara[a]*2-1;
        cout<<ans<<endl;
    }
    return 0;
}


