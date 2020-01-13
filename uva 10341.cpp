#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265
double p,q,r,s,t,u;
double fun(double x)
{
    double ans=p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
    return ans;
}
double binarySearch(double l, double r)
{
    int i=1;
  while (i <= 30)
  {
    double m = l + (r-l)/(2*1.0);
    double ans=fun(m);
    if (abs(ans)-0.0<=0.0000001)
        return m;
    if (ans > 0)
        l = m ;
    else
         r = m ;
    i++;
  }
  return -1.0;
}
int main()
{
    while(scanf("%lf",&p)==1){
        cin>>q>>r>>s>>t>>u;
        double ans,c,j,b,temp,pos;
        double st=0;double ed=1;
        ans=binarySearch(st,ed);
        if(ans==-1.0)
            printf("No solution\n");
        else
            printf("%0.4lf\n",ans);
    }
    return 0;
}
