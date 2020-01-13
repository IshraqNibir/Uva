#include <bits/stdc++.h>
using namespace std;
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
int main()
{
    while(1)
    {
        int a;
        cin>>a;
        if(a==0)
            break;
        int ans=phi(a);
        cout<<ans<<endl;
    }
    return 0;
}

