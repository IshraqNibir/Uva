#include <iostream>
#include <cstdio>
using namespace std;
int f(int x)
{
    if(x>100)
        return x-10;
    else
        return f(f(x+11));
}
int main()
{
    int a;
    while(scanf("%d",&a)==1){
        if(a==0)
        break;
        int ans=f(a);
        printf("f91(%d) = %d\n",a,ans);
    }
    return 0;
}
