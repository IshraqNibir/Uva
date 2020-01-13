#include <iostream>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1;
        map<string,string>my;
        int v[1005];
        for(int i=0;i<1005;i++)
            v[i]=0;
        map<string,int>ms;
        map<int,string>mi;
        string candidate,party;
        cin>>n1;
        getchar();
        for(int i=1;i<=n1;i++){
            getline(cin,candidate);
            getline(cin,party);
            my[candidate]=party;
            mi[i]=candidate;
            ms[candidate]=i;
        }
        int n2;
        cin>>n2;
        getchar();
        for(int i=1;i<=n2;i++){
            getline(cin,candidate);
            if(ms.find(candidate)!=ms.end())
                v[ms[candidate]]++;
        }
        int maximum=1;
        int high=0;
        int tie=0;
        for(int i=1;i<=n1;i++){
            if(v[i]>maximum)
            {
                maximum=v[i];
                high=i;
            }
        }
        cout<<high<<" "<<maximum<<endl;
        for(int i=1;i<=n1;i++){
            if(maximum=v[i]&&i!=high)
            tie=1;
        }
        if(tie==1)
            cout<<"tie"<<endl;
        else
           cout<<my[mi[high]]<<endl;
        if(t!=0)
            cout<<endl;
    }
    return 0;
}
