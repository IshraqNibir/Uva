#include <stdio.h>
#include <math.h>
#define pi 3.141592654
int main()
{
    double triangle,areain,root,r,dela,del,a,b,c,s,delab,radius,areaout,ans1,ans2;
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)*1.0/2;
    del=s*(s-a)*(s-b)*(s-c);
    triangle=sqrt(del);
    dela=((s-a)*(s-b)*(s-c))/s;
    r=sqrt(dela);
    areain=pi*r*r;
    delab=(a+b+c)*(b+c-a)*(c+a-b)*(a+b-c);
    root=sqrt(delab);
    radius=(a*b*c)/root;
    areaout=pi*radius*radius;
    ans1=areaout-triangle;
    ans2=triangle-areain;
    printf("%.4lf %.4lf %.4lf\n",ans1,ans2,areain);
    return 0;
}
