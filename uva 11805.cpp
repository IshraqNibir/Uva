#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t,k;
    k=1;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mount=0;
        while(mount<c){
            mount++;
            b=b+1;
            if(b>a)
                b=1;
            //b=b+1;
        }
        printf("Case %d: %d\n",k,b);
        k++;
    }
    return 0;
}
