// liet ke canh cau voi DFS

#include <bits/stdc++.h>

using namespace std;
int u, v;
vector<int> ke[1005];
int visit[1005];

void DFS(int s)
{
    stack<int> st;
    st.push(s);
    visit[s] = 1;
    while (!st.empty())
    {
        int x = st.top();
        st.pop();
        for (int i = 0; i < ke[x].size(); i++)
        {
            if (visit[ke[x][i]] == 0)
            {
                visit[ke[x][i]] = 1;
                st.push(x);
                st.push(ke[x][i]);
                break;
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

void canhcau(){
    memset(visit, 0, sizeof(visit));
    for (int i = 1;i<=u;i++){
        for (int j = 0; j < ke[i].size();j++){
            int x = ke[i][j];
            ke[i].erase(ke[i].begin() + j);
            DFS(i);
            if(!isall() && x>i)
                cout << i << " " << x<<" ";
            ke[i].insert(ke[i].begin() + j, x);
            memset(visit, 0, sizeof(visit));
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
        for (int i = 1; i <= u; i++)
        {
            ke[i].clear();
        }
        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        canhcau();
        cout << endl;
    }
}
