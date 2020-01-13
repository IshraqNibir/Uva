#include <iostream>
using namespace std;
int main()
{
    long a,b;
    while(1){
    long i,j,extra,len,ara[20],ara1[20],ara2[20],ara3[20],m,k,div,div1,rem,rem1,carry,mount;
    cin>>a;
    div=a;k=0;
    while(div>0){
        rem=div%10;
        ara[k]=rem;
        div=div/10;
        k++;
    }
    for(i=k-1,j=0;i>=0;i--,j++)
        ara1[j]=ara[i];
    cin>>b;
    if(a==0&&b==0)
        break;
    div1=b;m=0;
    while(div1>0){
        rem1=div1%10;
        ara2[m]=rem1;
        div1=div1/10;
        m++;
    }
    for(i=m-1,j=0;i>=0;i--,j++)
        ara3[j]=ara2[i];
    if(m<=k){
        mount=0;
        carry=0;
        len=k-1;extra=0;
        for(i=m-1;i>=0;i--){
            mount=ara3[i]+ara1[len]+extra;
            if(mount>=10){
                carry++;
                extra=1;
            }
            else
                extra=0;
            len--;
        }
        for(i=len;i>=0;i--){
            mount=ara1[i]+extra;
            if(mount>=10){
                carry++;
                extra=1;
            }
            else
                extra=0;
        }
        if(carry==0)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
        cout<<carry<<" "<<"carry operation."<<endl;
        else
            cout<<carry<<" "<<"carry operations."<<endl;
    }
    else{
        mount=0;
        carry=0;
        len=m-1;extra=0;
        for(i=k-1;i>=0;i--){
            mount=ara1[i]+ara3[len]+extra;
            if(mount>=10){
                carry++;
                extra=1;
            }
            else
                extra=0;
            len--;
        }
        for(i=len;i>=0;i--){
            mount=ara3[i]+extra;
            if(mount>=10){
                carry++;
                extra=1;
            }
            else
                extra=0;
        }
        if(carry==0)
        cout<<"No carry operation."<<endl;
        else if(carry==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<carry<<" "<<"carry operations."<<endl;
    }
    }
    return 0;
}


