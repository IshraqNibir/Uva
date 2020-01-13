#include <iostream>
#include <vector>
#include <algorithm>
int ara[100000005]={0};
using namespace std;
int main()
{
    vector<int>v;
    int a,mount,index,i;
    mount=0;
    while(cin>>a){
        index=0;
        v.push_back(a);
        mount++;
        sort(v.begin(),v.end());
        if(mount%2==1){
            index=mount/2;
            cout<<v[index]<<endl;
        }
        else{
            index=mount/2;
            index=(v[index-1]+v[index])/2;
            cout<<index<<endl;
        }
    }
    return 0;
}
