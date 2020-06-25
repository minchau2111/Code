// dem so thanh phan lien thong

#include <bits/stdc++.h>

using namespace std;
vector<int> mincy[10000];
int ok[10005];

void BFS(int u)
{
    queue<int> sunn;
    ok[u] = 1;
    sunn.push(u);
    while (!sunn.empty())
    {
        int x = sunn.front();
        sunn.pop();
        for (int i = 0; i < mincy[x].size(); i++)
        {
            if (ok[mincy[x][i]] == 0)
            {
                ok[mincy[x][i]] = 1;
                sunn.push(mincy[x][i]);
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
        int u, v;
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
                BFS(i);
            }
        }
        cout << ans << endl;
    }
}