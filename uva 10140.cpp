#include <iostream>
#include <vector>
#include <cmath>
#define sz 100000000
using namespace std;
vector<long long int>sg;
int ara[sz];
long long int p[sz],k=1;
void sieve()
{
    int i,j,root;
    for(i=2;i<=sz;i++){
        ara[i]=1;
    }
    root=sqrt(sz);
    for(i=2;i<=root;i++){
        if(ara[i]==1){
            for(j=2;i*j<=sz;j++){
                ara[i*j]=0;
            }
        }
    }
    p[0]=2;
    for(i=3;i<=sz;i=i+2){
        if(ara[i]==1){
            p[k]=i;
            k++;
        }
    }
}
void segmented(long long l,long long u)
{
    long long root,start,i,j,si;
    sg.clear();
    root=sqrt(u)+1;
    for(i=l;i<=u;i++){
        sg.push_back(i);
    }
    if(l==0)
        sg[1]=0;
    else if(l==1)
        sg[0]=0;
    for(i=0;p[i]<=root;i++){
        si=p[i];
        start=si*si;
        if(start<l)
            start=((l+si-1)/si)*si;
        for(j=start;j<=u;j=j+si)
        {
            sg[j-l]=0;
        }
    }
}
int main()
{
    sieve();
    long long l,u,i,z;
    long long maximum,minimum,low,high,lower,higher;
    while(cin>>l>>u){
    vector<long long int>segment;
    segmented(l,u);
    for(i=l;i<=u;i++){
        if(sg[i-l]!=0){
            segment.push_back(sg[i-l]);
        }
    }
    z=segment.size();
    if(z<2){
        cout<<"There are no adjacent primes."<<endl;
    }
    else{
    maximum=0;minimum=10000;
    for(i=0;i<z-1;i++){
        if((segment[i+1]-segment[i])<minimum){
            minimum=segment[i+1]-segment[i];
            low=segment[i];high=segment[i+1];
        }
        if((segment[i+1]-segment[i])>maximum){
            maximum=segment[i+1]-segment[i];
            lower=segment[i];higher=segment[i+1];
        }
    }
    cout<<low<<","<<high<<" are closest, "<<lower<<","<<higher<<" are most distant."<<endl;
    }
    }
    return 0;
}

