//kiem tra duong di

#include <bits/stdc++.h>

using namespace std;
int u, v, s, t;
vector<int> mincy[10000];
int mark[1005];
int k[1005];

void BFS(int s)
{
    queue<int> sunn;
    sunn.push(s);
    mark[s] = 1;
    while (!sunn.empty())
    {
        int tmp = sunn.front();
        sunn.pop();
        // cout << tmp << " ";
        for (int i = 0; i < mincy[tmp].size(); i++)
        {
            if (mark[mincy[tmp][i]] == 0)
            {
                k[mincy[tmp][i]] = tmp;
                mark[mincy[tmp][i]] = 1;
                sunn.push(mincy[tmp][i]);
            }
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> u >> v;
        memset(mark, 0, sizeof(mark));
        memset(k, 0, sizeof(k));
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
        int q;
        cin >> q;
        while (q--)
        {
            memset(mark, 0, sizeof(mark));
            memset(k, 0, sizeof(k));
            cin >> s >> t;
            BFS(s);
            if (k[t] == 0)
                cout << "NO";
            else
                cout << "YES";
            cout << endl;
        }
    }
}