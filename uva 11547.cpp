#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ara[10],div,n,rem;
        int a;
        cin>>a;
        a=a*567;a=a/9;a=a+7492;a=a*235;a=a/47;a=a-498;
        //cout<<a<<endl;
        a=a/10;
        a=a%10;
        a=abs(a);
        cout<<a<<endl;
    }
    return 0;
}
