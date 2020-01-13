#include <bits/stdc++.h>
using namespace std;
#define ll long long long
#define pb push_back
int main()
{
    string s;
    int ks=1;
    while(cin>>s)
    {
        if(ks<10 && ks>=1)
            printf("   %d.",ks++);
        else if(ks>=10 && ks<100)
            printf("  %d.",ks++);
        else if(ks>=100 && ks<1000)
            printf(" %d.",ks++);
        else if(ks>=1000)
            printf("%d.",ks++);

        int len=s.length();
        if(len==1 && s[0]=='0') {
            cout<<" "<<"0"<<endl;
            continue;
        }
        int kuti=0;
        if(s.length()>=8)
            kuti=1;
        int dif=15-len;
        for(int i=1;i<=dif;i++) {
            s="0"+s;
        }

        if(s[0]!='0')
            cout<<" "<<s[0]<<" kuti";
        if(s[1]!='0')
            cout<<" "<<s[1]<<s[2]<<" lakh";
        if(s[1]=='0' && s[2]!='0')
            cout<<" "<<s[2]<<" lakh";
        if(s[3]!='0')
            cout<<" "<<s[3]<<s[4]<<" hajar";
        if(s[3]=='0' && s[4]!='0')
            cout<<" "<<s[4]<<" hajar";
        if(s[5]!='0')
            cout<<" "<<s[5]<<" shata";
        int cnt=0;
        if(s[6]!='0') {
            cout<<" "<<s[6]<<s[7]<<" kuti";
            cnt=1;
        }
        if(s[6]=='0' && s[7]!='0') {
            cnt=1;
            cout<<" "<<s[7]<<" kuti";
        }
        if(cnt==0 && kuti==1)
            cout<<" kuti";
        if(s[8]!='0')
            cout<<" "<<s[8]<<s[9]<<" lakh";
        if(s[8]=='0' && s[9]!='0')
            cout<<" "<<s[9]<<" lakh";
        if(s[10]!='0')
            cout<<" "<<s[10]<<s[11]<<" hajar";
        if(s[10]=='0' && s[11]!='0')
            cout<<" "<<s[11]<<" hajar";
        if(s[12]!='0')
            cout<<" "<<s[12]<<" shata";
        if(s[13]!='0')
            cout<<" "<<s[13]<<s[14];
        if(s[13]=='0' && s[14]!='0')
            cout<<" "<<s[14];
        cout<<endl;
    }
    return 0;
}
