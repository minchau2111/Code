// DFS tren do thi co huong

#include <bits/stdc++.h>

using namespace std;
int u, v, s;
int mark[1005];
int a[1005][1005];

void DFS(int s)
{
    cout << s << " ";
    mark[s] = 1;
    for (int i = 1; i <= u; i++)
    {
        if (a[s][i] == 1 && mark[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> u >> v >> s;
        memset(mark, 0, sizeof(mark));
        for (int i = 1; i <= u; i++)
        {
            for (int j = 1; j <= u; j++)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        DFS(s);
        cout << endl;
    }
}