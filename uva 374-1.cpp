#include <iostream>
using namespace std;
long Bigmod(long b, long p, long m)
{
    if(p==0) return 1;
    if(p%2==0)
    return (Bigmod(b,p/2,m)*Bigmod(b,p/2,m))%m;
    return (Bigmod(b,p-1,m)*(b%m))%m;
}

int main()
{
    long base,pow,mod;
    while(cin>>base>>pow>>mod)
    {
        cout<<Bigmod(base,pow,mod)<<endl;
    }

return 0;
}
