#include <bits/stdc++.h>
using namespace std;
vector<int>v,v1,v2;
int pos[10001],pos1[10001];
void lis()
{
    for( int i=0;i<v1.size();i++)
    {
        vector<int>::iterator iv=lower_bound(v.begin(),v.end(),v1[i]);
        if(v.end()==iv)
            v.push_back(v1[i]);
        else
            v[iv-v.begin()]=v1[i];
        pos[i]=v.size();
    }
}
void lis1()
{
    for( int i=0;i<v1.size();i++)
    {
        vector<int>::iterator iv=lower_bound(v2.begin(),v2.end(),v1[i]);
        if(v2.end()==iv)
            v2.push_back(v1[i]);
        else
            v2[iv-v2.begin()]=v1[i];
        pos1[i]=v2.size();
    }
}


int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        memset(pos,0,sizeof(pos));
        memset(pos1,0,sizeof(pos1));
        int a,m;
        m=n;
        while(n--)
        {
            scanf("%d",&a);
            v1.push_back(a);
        }
        lis();
        reverse(v1.begin(),v1.end());
        lis1();
        int minimum,maxi,i;
        maxi=1;
        for(i=0;i<m;i++){
            minimum=min(pos[i],pos1[m-i-1]);
            maxi=max(maxi,minimum);
        }
        maxi=maxi*2-1;
        cout<<maxi<<endl;
        v.clear();v1.clear(),v2.clear();
    }
    return 0;
}
