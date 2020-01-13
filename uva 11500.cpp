#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ev1,ev2,At,d;
    while(1){
    cin>>ev1>>ev2>>At>>d;
    if(ev1==0 && ev2==0 && At==0 && d==0)
        break;
    int a,b;
    float p,q,pat,ans;
    if(ev1%d==0)
        a=ev1/d;
    else
        a=ev1/d+1;
    if(ev2%d==0)
        b=ev2/d;
    else
        b=ev2/d+1;
    //cout<<a<<" "<<b<<endl;
    p=At*1.0/6;
    q=1-p;
    //cout<<p<<" "<<q<<endl;
    if(At==3)
        ans=(a*1.0/(a+b))*100;
    else{
        pat=(q/p);
        ans=100.0*(1.0-pow(pat,a))/(1-pow(pat,a+b));
    }
    printf("%.1lf\n",ans);
    }
    return 0;

}
