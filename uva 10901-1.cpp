#include <bits/stdc++.h>
using namespace std;
int main()
{
    int kase;
    scanf("%d",&kase);
    while(kase--)
    {
        int n,t,m,car_nmbr,cs;
        int ara[10005]={0};
        queue< pair<int,int> >left;
        queue< pair<int,int> >right;
        scanf("%d %d %d",&n,&t,&m);
        getchar();
        car_nmbr=1;
        cs=m;
        int time,ferry;
        char side[50];
        while(m--)
        {
            scanf("%d %s",&time,&side);
            getchar();
            if(side[0]=='l')
                left.push(make_pair(car_nmbr,time));
            else
                right.push(make_pair(car_nmbr,time));
            car_nmbr++;
        }
        ferry=0;
        int pos=0;
        while(1)
        {
            if(left.empty() && right.empty())
                break;
            int cars=1;
            if(pos==0)
            {
                while(left.front().second<=ferry && !left.empty() && cars<=n)
                {
                    ara[left.front().first]=ferry+t;
                    cars++;
                    left.pop();
                }
                if(cars>1)
                {
                    ferry=ferry+t;
                    pos=1;
                    continue;
                }
                if(right.empty() || (!left.empty() && left.front().second<=right.front().second))
                {
                    ferry=left.front().second;
                    while(left.front().second<=ferry && !left.empty() && cars<=n)
                    {
                        ara[left.front().first]=ferry+t;
                        cars++;
                        left.pop();
                    }
                    ferry=ferry+t;
                    pos=1;
                }
                else
                {
                    ferry=max(ferry,right.front().second)+t;
                    pos=1;
                }
            }
            else
            {
                while(right.front().second<=ferry && !right.empty() && cars<=n)
                {
                    ara[right.front().first]=ferry+t;
                    cars++;
                    right.pop();
                }
                if(cars>1)
                {
                    ferry=ferry+t;
                    pos=0;
                    continue;
                }
                if(left.empty() || (!right.empty() && right.front().second<=left.front().second))
                {
                    ferry=right.front().second;
                    while(right.front().second<=ferry && !right.empty() && cars<=n)
                    {
                        ara[right.front().first]=ferry+t;
                        cars++;
                        right.pop();
                    }
                    ferry=ferry+t;
                    pos=0;
                }
                else
                {
                    ferry=max(ferry,left.front().second)+t;
                    pos=0;
                }
            }
        }
        for(int i=1;i<=cs;i++)
            printf("%d\n",ara[i]);
        if(kase)
            printf("\n");
    }
    return 0;
}






