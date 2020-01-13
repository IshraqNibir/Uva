#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <map>
using namespace std;
int main()
{
    int mnt,jnt=0;
    while(1){
    if(jnt==1)
    break;
    map<string,map<int,string> >my;
    map<int,string>ms;
    map<string,int>mv;
    map<string,int>pos;
    map<string,int>ekbar;
    char bstr[100],sstr[100],str[100];
    int i,j,m,k,l,n,cnt,ara[10005];
    for(n=0;n<10005;n++)
        ara[n]=0;
    j=0;cnt=0;
    while(scanf("%[^\n]%*c",&str)==1){
        if(mnt==1&&str[0]=='0'){
            jnt=1;
            break;
        }
        if(str[0]=='1'){
            mnt=1;
            break;
        }
        if(str[0]>='A'&&str[0]<='Z'){
            //if(cnt>0)
               //ara[j]=my[ms[j]].size();
            strcpy(bstr,str);
            ms[j]=str;
            j++;
            //cnt++;
            i=0;
        }
        else{
           if(mv[str]==1){
               if(pos[str]==j)
                   continue;
               if(ekbar[str]!=1){
                   ara[pos[str]]--;
                   ekbar[str]=1;
               }
               continue;
           }
            my[bstr][i]=str;
            ara[j]++;
            mv[str]=1;
            pos[str]=j;
            i++;
        }
    }
    //cout<<ara[1]<<endl;
    for(k=1;k<=j;k++){
        int maximum=-1;
        int lim;
        map<int,string>ans;
        for(l=1;l<=j;l++){
            if(ara[l]>=maximum){
                if(ara[l]==maximum){
                    if(ms[l-1]<ans[lim]){
                        ans[l]=ms[l-1];
                        lim=l;
                    }
                }
                else if(ara[l]>maximum){
                    maximum=ara[l];
                    ans[l]=ms[l-1];
                    lim=l;
                }
                //cout<<maximum<<" "<<ans[l]<<endl;
            }
        }
        cout<<ans[lim]<<" "<<maximum<<endl;
        ara[lim]=-2;
    }
    }
    return 0;
}
