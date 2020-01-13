#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    vector<string>dic;
    string word;
    while(1)
    {
        cin>>word;
        if(word=="XXXXXX")
            break;
        dic.push_back(word);
    }
    sort(dic.begin(),dic.end());
    while(1)
    {
        string scramble,temp;
        cin>>scramble;
        if(scramble=="XXXXXX")
            break;
        sort(scramble.begin(),scramble.end());
        int yes=0;
        for(int i=0;i<dic.size();i++){
            temp=dic[i];
            sort(temp.begin(),temp.end());
            if(temp==scramble){
                cout<<dic[i]<<endl;
                yes=1;
            }
        }
        if(yes==0)
            cout<<"NOT A VALID WORD"<<endl;
        cout<<"******"<<endl;
    }
    return 0;
}
