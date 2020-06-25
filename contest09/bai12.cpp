// tim duong di tren do thi vo huong bang BFS

#include <bits/stdc++.h>

using namespace std;
int u, v, s, t;
vector<int> mincy[10000];
queue<int> sunn;
int mark[1005];
int k[1005];

void BFS(int s)
{
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
        cin >> u >> v >> s >> t;
        memset(mark, 0, sizeof(mark));
        memset(k, 0, sizeof(k));
        for(int i=1;i<=u;i++){
            mincy[i].clear();
        }   
        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            mincy[x].push_back(y);
            mincy[y].push_back(x);
        }
        BFS(s);
        if (k[t] == 0)
            cout << "-1";
        else
        {
            vector<int> socute;
            socute.push_back(t);
            while (k[t]!=s)
            {
                socute.push_back(k[t]);
                t = k[t];
            }
            socute.push_back(s);
            reverse(socute.begin(), socute.end());
            for (int i = 0; i < socute.size(); i++)
            {
                cout << socute[i] << " ";
            }
        }
        cout << endl;
    }
}