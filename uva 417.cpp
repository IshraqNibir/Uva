#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int nCr(int n,int r)
{
    if(r==1) return n;
    if (n==r) return 1;
    return nCr(n-1, r) + nCr(n-1, r-1);
}
int main()
{
    char word[5];
    //int a,b,c,d,i,len,number,len1,j,mount,m;
    while(cin>>word){
    int a,b,c,d,i,len,number,len1,j,mount,m;
    mount=0;
    len=strlen(word);
    if(len>1){
        for(i=0;i<len-1;i++){
            if(word[i]>=word[i+1]){
               mount=1;
               break;
            }
        }
    }
    if(mount==1){
        cout<<"0"<<endl;
        continue;
    }
    number=0;
    if(len==1){
        number=word[0]-'a';
        cout<<number+1<<endl;
    }
    else{
    for(i=1;i<len;i++){
        a=nCr(26,i);
        number=number+a;
    }
    c=len-1;
    b=word[0]-'a';
    if(b!=0){
       d=25;
       for(i=1;i<=b;i++){
           a=nCr(d,c);
           number=number+a;
           d--;
       }
    }
    for(i=1;i<=len-2;i++){
        b=word[i]-word[i-1];
        c='z'-word[i-1]-1;
        len1=len-(i+1);
        for(j=1;j<b;j++){
            a=nCr(c,len1);
            number=number+a;
            c--;
        }
    }
    d=word[len-1]-word[len-2];
    number=number+d;
    cout<<number<<endl;
    }
    }
    return 0;
}


