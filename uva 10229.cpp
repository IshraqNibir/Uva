#include <bits/stdc++.h>
using namespace std;
long ara[20];
long fib[10000000];
void fun()
{
    ara[0]=0;
    ara[1]=3;
    ara[2]=6;
    ara[3]=12;
    for(int i=4;i<=20;i++)
        ara[i]=ara[i-1]*2;
}
int main()
{
    fun();
    long a,b;
    while(cin>>a>>b){
        if(b==0){
           cout<<"0"<<endl;
           continue;
        }
        long loop=a%ara[b];
        long mod=pow(2,b);
        fib[0]=0;fib[1]=1;
        for(int i=2;i<=loop;i++){
           fib[i]=(fib[i-1]%mod)+(fib[i-2]%mod);
           fib[i]=fib[i]%mod;
       }
       cout<<fib[loop]<<endl;
    }
    return 0;
}
