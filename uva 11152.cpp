#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define pi acos(-1)
int main()
{
    double triangle,areain,root,r,dela,del,a,b,c,s,delab,radius,areaout,ans1,ans2;
    while(cin>>a>>b>>c){
    s=(a+b+c)/2;
    del=s*(s-a)*(s-b)*(s-c);
    triangle=sqrt(del);
    dela=((s-a)*(s-b)*(s-c))/(s*1.0);
    r=sqrt(dela);
    areain=pi*r*r;
    delab=(a+b+c)*(b+c-a)*(c+a-b)*(a+b-c);
    root=sqrt(delab);
    radius=(a*b*c)/root;
    areaout=pi*radius*radius;
    ans1=areaout-triangle;
    ans2=triangle-areain;
    cout<<fixed<<setprecision(4)<<ans1<<" "<<fixed<<setprecision(4)<<ans2<<" "<<fixed<<setprecision(4)<<areain<<endl;
    }
    return 0;
}
