#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(1)
    {
        int i,j,tk,koijn,pper,gese;
        map<string,int>my;
        map<int,string>mv;
        string name,dibe,nibe;
        for(i=1;i<=n;i++)
        {
            cin>>name;
            my[name]=0;
            mv[i]=name;
        }
        for(i=1;i<=n;i++)
        {
            cin>>dibe>>tk>>koijn;
            if(koijn==0){
                //my[dibe]=my[dibe]+tk;
                continue;
            }
            pper=tk/koijn;
            gese=pper*koijn;
            my[dibe]=my[dibe]-gese;
            for(j=1;j<=koijn;j++)
            {
                cin>>nibe;
                my[nibe]=my[nibe]+pper;
            }
        }
        for(i=1;i<=n;i++)
            cout<<mv[i]<<" "<<my[mv[i]]<<endl;
        if(cin>>n)
            cout<<endl;
        else
            break;
    }
    return 0;
}
