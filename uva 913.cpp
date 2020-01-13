#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long a,ans,n,b;
    while(scanf("%lld",&n)==1){
        a=(n+1)/2;
        b=(n*a)+(n-a);
        if(n==1){
            cout<<"1"<<endl;
            continue;
        }
        ans=b+(b-2)+(b-4);
        cout<<ans<<endl;
    }
    return 0;
}
