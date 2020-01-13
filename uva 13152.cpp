#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,ks=1;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        vector<char>jacky;
        for(int i=1;i<=n;i++) {
            cin>>a;
            v.push_back(a);
        }
        int ara[100005];
        memset(ara,0,sizeof(ara));
        for(int i=0;i<n;i++) {
            ara[v[i]]++;
        }
        int i,j,skip=0;


    }
    return 0;
}
