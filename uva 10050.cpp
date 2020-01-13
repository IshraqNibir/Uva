#include <bits/stdc++.h>
using namespace std;
bool hol[3700];
void holidays()
{
    memset(hol,false,sizeof(hol));
    int i,j;
    for(i=7;i<3700;i=i+7)
        hol[i]=true;
    for(i=6;i<3700;i=i+7)
        hol[i]=true;
}
int main()
{
    holidays();
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,day;
        bool hartal[3700];
        memset(hartal,false,sizeof(hartal));
        cin>>n>>p;
        for(int i=1;i<=p;i++)
        {
            cin>>day;
            for(int j=day;j<3700;j=j+day)
            {
                hartal[j]=true;
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(hartal[i])
            {
                if(hol[i])
                    continue;
                else
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
