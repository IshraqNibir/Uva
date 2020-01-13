#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1)
const int MOD = (int)1e9+7;
int par[10000];
using namespace std;
void ini()
{
    for(int i=0; i<10000; i++)
    {
        par[i] = i;
    }
}

int findd(int n)
{
    if(n == par[n]) return n;
    return par[n] = findd(par[n]);
}

void unionn(int a , int b)
{
    int u = findd(a);
    int v = findd(b);
    if( u == v ) return;
    else par[v] = u;
}
int main()
{
    IOS
    //freopen("nibir.txt", "w", stdout);
    //freopen("nibir.txt", "r", stdin);
    while(1) {
        ini ();
        int c, r;
        cin >> c >> r;
        if (c == 0 && r == 0)
            break;
        string s, s1;
        vector <string> v;
        map <string,int> m;
        int cnt = 1;
        for(int i=1; i<=c; i++) {
            cin >> s;
            if (m[s] == 0) {
                m[s] = cnt++;
                v.pb (s);
            }
        }
        for (int i=1; i<=r; i++) {
            cin >> s >> s1;
            int st = m[s];
            int ed = m[s1];
            unionn(st, ed);
        }
        if (r == 0) {
            cout << "1" << endl;
            continue;
        }
        int vis[10000], ans[10000];
        memset (vis, 0, sizeof(vis));
        memset (ans, 0, sizeof(ans));
        for (int i=0; i<v.size(); i++) {
            int fd = findd(m[v[i]]);
            ans[fd]++;
        }
        int mx = -1;
        for (int i=1; i<10000; i++)
            mx = max (mx,ans[i]);
        cout << mx << endl;
    }
    return 0;
}

