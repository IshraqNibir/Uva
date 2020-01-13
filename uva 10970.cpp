#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int m,c;
    while(scanf("%d %d",&m,&c)==2)
    {
        int cut=0;
        cut=m-1;
        cut=cut+(m*(c-1));
        cout<<cut<<endl;
    }
    return 0;

}
