#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2){
    int i,cig,c,div;
    c=a;
    cig=a;
    while(c>=b)
    {
        div=c/b;
        cig=cig+div;
        c=div+(c%b);
    }
    cout<<cig<<endl;
    }
    return 0;
}
