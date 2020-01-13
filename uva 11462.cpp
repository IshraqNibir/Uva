#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1){
        if(n==0)
        break;
        int i,j,a;
        vector<int>my;
        for(i=0;i<n;i++){
            cin>>a;
            my.push_back(a);
        }
        sort(my.begin(),my.end());
        for(i=0;i<n;i++){
            cout<<my[i];
            if(i<n-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
