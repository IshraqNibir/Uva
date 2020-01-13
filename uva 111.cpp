#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    while (cin >> n) {
        vector <int> v;
        map <int,int> my;
        for (int i=1; i<=n; i++) {
            cin >> a;
            my[a] = i;
        }
        int num;
        while (1) {
            scanf ("%d%c",&num, &ch);
            vector<int>::iterator iv=lower_bound(v.begin(),v.end(),num);
            if(v.end()==iv)
                v.push_back(num);
            else
                v[iv-v.begin()]=num;
            if (ch=='\n') {
                cout << v.size() << endl;
                v.clear();
            }
        }

}
