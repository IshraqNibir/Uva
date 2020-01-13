#include <iostream>
using namespace std;
int main()
{
    long a;
    while(cin>>a){
        if(a==0)
        break;
    int div,count,i,m;
    int ara[20];
    div=a;
    count=0;
    while(1){
        if(count>0)
           div=m;
        i=0;
        m=0;
        while(div>0){
            ara[i]=div%10;
            div=div/10;
            m=m+ara[i];
            i++;
        }
        count++;
        if(m<10){
            cout<<m<<endl;
            break;
        }
    }
    }
    return 0;
}
