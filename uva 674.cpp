#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1){
    int i,j,coin[10],dp[8000];
    memset(dp,0,sizeof(dp));
    coin[1]=1;coin[2]=5;coin[3]=10;coin[4]=25;coin[5]=50;
    dp[0]=1;
    for(j=1;j<=5;j++){
        for(i=1;i<=n;i++){
            if(i>=coin[j])
            dp[i]+=dp[i-coin[j]];
        }
    }
    int a;
    /*for(i=1;i<=5;i++){
        cin>>a;
        cout<<dp[a]<<endl;
    }*/
    cout<<dp[n]<<endl;
    }
    return 0;

}
