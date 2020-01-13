#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ks=1;
    while(1)
    {
        cin>>n;
        vector<int>v;
        if(n==0)
            break;
        int sum=0,h;
        for(int i=1;i<=n;i++) {
            cin>>h;
            sum=sum+h;
            v.push_back(h);
        }
        int br=sum/n;
        int mov=0;
        for(int i=0;i<v.size();i++) {
            if(v[i]>br)
                mov+=(v[i]-br);
        }
        printf("Set #%d\n",ks++);
        printf("The minimum number of moves is %d.\n",mov);
        cout<<endl;
    }
    return 0;
}
