#include <iostream>
#include <map>
#include <vector>
#include <cstring>
#include <string>
#include <string.h>
#include <stdio.h>
#include <cstdio>
using namespace std;
int main()
{
    char name[100];
    while(scanf ("%[^\n]%*c", name)==1){
    int i,j,k,l,mount,a,n,len;
    map<string,int>my;
    map<char,int>ms;
    len=strlen(name);
    mount=0;
    for(a=0;a<len;a++){
        if(ms[name[a]]!=1){
            ms[name[a]]=1;
            mount++;
        }
    }
    i=0;
    while(i<len){
        //i=0;
        k=i+1;
        //char str[100];
        while(k<len){
            char str[100];
            char rstr[100];
            l=0;
            str[l]=name[i];
            l++;
           for(j=i+1;j<=k;j++){
               str[l]=name[j];
               l++;
           }
           str[l]='\0';
           n=0;
           for(j=l-1;j>=0;j--){
               rstr[n]=str[j];
               n++;
           }
           rstr[n]='\0';
           //cout<<str<<endl;
           //cout<<rstr<<endl;
           if(strcmp(rstr,str)==0){
               if(my[str]!=1){
                  my[str]=1;
                  mount++;
               }
           }
           k++;
       }
       i++;
    }
    for(a=0;a<len;a++){
        if(name[a]!=' '){
            printf("The string '%s' contains %d palindromes.\n",name,mount);
            break;
        }
    }
    }
    return 0;
}
