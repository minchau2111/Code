// tim duowng di tren do thi vo huong voi DFS;

#include <bits/stdc++.h>

using namespace std;
int u, v, s, t;
int mark[1005];
int a[1005][1005];
int x[1005];
vector<int> sunn;

void DFS(int s)
{
    mark[s] = 1;
    for (int i = 1; i <= u; i++)
    {
        if (a[s][i] == 1 && mark[i] == 0)
        {
            x[i] = s;
            DFS(i);
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> u >> v >> s >> t;
        sunn.clear();
        memset(x, 0, sizeof(x));
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
            a[y][x] = 1;
        }
        DFS(s);
        if(x[t]==0){
            cout << "-1";
        }
        else{
            sunn.push_back(t);
            while(x[t]!=s){
                sunn.push_back(x[t]);
                t = x[t];
            }
            sunn.push_back(s);
            reverse(sunn.begin(), sunn.end());
            for (int i = 0; i < sunn.size();i++){
                cout << sunn[i] << " ";
            }
        }
        cout << endl;
    }
}