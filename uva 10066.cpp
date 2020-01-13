#include <bits/stdc++.h>
using namespace std;
#define MAXC 105
int A[MAXC],B[MAXC];
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
int n1,n2,a;
int calcLCS(int i,int j)
{
	if(A[i]==0 or B[j]==0) return 0;
	if(visited[i][j])return dp[i][j];

	int ans=0;
	if(A[i]==B[j]) ans=1+calcLCS(i+1,j+1);
	else
	{
		int val1=calcLCS(i+1,j);
		int val2=calcLCS(i,j+1);
		ans=max(val1,val2);
	}
	visited[i][j]=1;
	dp[i][j]=ans;
	return dp[i][j];
}

int main()
{
    int ks=1;
    while(1) {
        cin>>n1>>n2;
        if(n1==0 and n2==0)
            break;
        memset(A,0,sizeof(A));
        memset(B,0,sizeof(B));
        memset(visited,false,sizeof(visited));
        memset(dp,0,sizeof(dp));
	    for(int i=1;i<=n1;i++) {
            cin>>a;
            A[i]=a;
	    }
	    for(int i=1;i<=n2;i++) {
            cin>>a;
            B[i]=a;
	    }
	    printf("Twin Towers #%d\n",ks++);
        printf("Number of Tiles : %d\n\n",calcLCS(1,1));
    }
	return 0;
}

