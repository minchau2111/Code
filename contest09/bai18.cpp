// kiem tra lien thong bang BFS

#include <bits/stdc++.h>

using namespace std;
int u, v;
vector<int> ke[1005];
int visit[1005];

void BFS(int u)
{
    queue<int> sunn;
    visit[u] = 1;
    sunn.push(u);
    while (!sunn.empty())
    {
        int x = sunn.front();
        sunn.pop();
        for (int i = 0; i < ke[x].size(); i++)
        {
            if (visit[ke[x][i]] == 0)
            {
                visit[ke[x][i]] = 1;
                sunn.push(ke[x][i]);
            }
        }
    }
}

bool isall()
{
    for (int i = 1; i <= u; i++)
    {
        if (!visit[i])
            return false;
    }
    return true;
}

bool lienthong()
{
    memset(visit, 0, sizeof(visit));
    for (int i = 1; i <= u; i++)
    {
        BFS(i);
        if (!isall())
            return false;
        memset(visit, 0, sizeof(visit));
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> u >> v;
        for (int i = 1; i <= u; i++)
        {
            ke[i].clear();
        }
        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        if (lienthong())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}