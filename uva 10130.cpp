#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int K[1011][31];
void knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   //int K[n+1][W+1];

   // Build table K[][] in bottom up manner
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }

   //return K[n][W];
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int val[1010],wt[1010],i;
        memset(val,0,sizeof(val));
        memset(wt,0,sizeof(wt));
        int  W ;
        int n,m,cnt;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>val[i]>>wt[i];
        knapSack(30, wt, val, n);
        cin>>m;
        cnt=0;
        for(i=1;i<=m;i++){
            cin>>W;
            cnt=cnt+K[n][W];
        }
        cout<<cnt<<endl;
    }
    return 0;
}

