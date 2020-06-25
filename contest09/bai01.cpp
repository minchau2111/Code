// chuyen danh sach canh sang danh sach ke

#include <bits/stdc++.h>

using namespace std;
vector<int> mincy[1000];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 1000; i++)
        {
            mincy[i].clear();
        }
        int u, v;
        cin >> u >> v;
        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            mincy[x].push_back(y);
            mincy[y].push_back(x);
        }
        for (int i = 1; i <= u; i++)
        {
            cout << i << ": ";
            for (int j = 0; j < mincy[i].size(); j++)
            {
                cout << mincy[i][j] << " ";
            }
            cout << endl;
        }
    }
}