#include <bits/stdc++.h>
using namespace std;
string s;
int len,r;
int ara[32];
vector<char>res;
void solution()
{
    int j;
    for(j=0;j<res.size();j++)
    {
        cout<<res[j];
    }
    cout<<endl;
}
void rec(int cnt)
{
    int i;
    if(int(res.size())==r){
        solution();
        return ;
    }
    for(i=cnt;i<len;i++)
    {
        if(!ara[i]){
            ara[i]=1;
            res.push_back(s[i]);
            rec(i+1);
            ara[i]=0;
            res.pop_back();
        }
        while(s[i]==s[i+1]) i++ ;
    }
}
int main()
{
    while(cin>>s)
    {
        cin>>r;
        sort(s.begin(),s.end());
        memset(ara,0,sizeof(ara));
        len=s.length();
        rec(0);
        res.clear();
    }
    return 0;
}
