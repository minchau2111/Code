// dem so thanh phan lien thong

#include <bits/stdc++.h>

using namespace std;
vector<int> mincy[10000];
int ok[10005];
int u, v;

void DFS(int s)
{
    stack<int> sunn;
    ok[s] = 1;
    sunn.push(s);
    while (!sunn.empty())
    {
        int x = sunn.top();
        sunn.pop();
        for (int i = 0; i < mincy[x].size(); i++)
        {
            if (ok[mincy[x][i]] == 0)
            {
                ok[mincy[x][i]] = 1;
                sunn.push(x);
                sunn.push(mincy[x][i]);
                break;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> u >> v;
        memset(ok, 0, sizeof(ok));
        for (int i = 1; i <= u; i++)
        {
            mincy[i].clear();
        }
        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            mincy[x].push_back(y);
            mincy[y].push_back(x);
        }
        int ans = 0;
        for (int i = 1; i <= u; i++)
        {
            if (ok[i] == 0)
            {
                ans++;
                DFS(i);
            }
        }
        cout << ans << endl;
    }
}