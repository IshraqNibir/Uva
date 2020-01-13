#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t,i,j,k,a,b;
    cin>>t;
    for(i=1;i<=t;i++){
        int mount=0;
        cin>>a>>b;
        for(j=a;j<=b;j++)
            if(j%2==1)
            mount=mount+j;
        printf("Case %d: %d\n",i,mount);
    }
    return 0;
}
