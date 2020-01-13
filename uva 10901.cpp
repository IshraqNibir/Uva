#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,t,m,car_nmbr,cs;
        int ara[10005]={0};
        queue< pair<int,int> >left;
        queue< pair<int,int> >right;
        scanf("%d %d %d",&n,&t,&m);
        car_nmbr=1;
        cs=m;
        int time,ferry;
        char side[50];
        while(m--)
        {
            scanf("%d %s",&time,&side);
            if(side[0]=='l')
                left.push(make_pair(car_nmbr,time));
            else
                right.push(make_pair(car_nmbr,time));
            car_nmbr++;
        }
        ferry=0;
        int cars,cars1;
        string pos="left";
        int fry,z;
        while(1)
        {
            if(left.empty() && right.empty())
                break;
            if((left.front().second<=ferry && left.front().first>0 ) || (right.front().second<=ferry && right.front().first>0)){
                if(pos=="left"){
                    if(left.front().second<=ferry && left.front().first>0){
                        cars=1;
                        while(left.front().second<=ferry && cars<=n)
                        {
                            fry=ferry+t;
                            pos="right";
                            ara[left.front().first]=fry;
                            left.pop();
                            if(left.front().first==0)
                                break;
                            cars++;
                        }
                        ferry=fry;
                    }
                    else
                    {
                        pos="right";
                        ferry+=t;
                    }
                }
                else{
                    if(right.front().second<=ferry && right.front().first>0){
                        cars1=1;
                        while(right.front().second<=ferry && cars1<=n)
                        {
                            fry=ferry+t;
                            pos="left";
                            ara[right.front().first]=fry;
                            //cout<<fry<<"y"<<endl;
                            right.pop();
                            if(right.front().first==0)
                                break;
                            cars1++;
                        }
                        ferry=fry;
                    }
                    else
                    {
                        pos="left";
                        ferry+=t;
                    }
                }
            }
            else
            {
                if((left.front().second<right.front().second) || (left.front().first>0 && right.front().first==0))
                {
                    if(pos=="right")
                    {
                        pos="left";
                        ferry=left.front().second+t;
                    }
                    else
                        ferry=left.front().second;
                }
                else
                {
                    if(pos=="left")
                    {
                        pos="right";
                        ferry=right.front().second+t;
                    }
                    else
                        ferry=right.front().second;
                }
            }

        }
        int i,j;
        for(i=1;i<=cs;i++)
            printf("%d\n",ara[i]);
    }
    return 0;
}
