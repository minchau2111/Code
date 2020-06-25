// BFS tren do thi vo huong

#include<bits/stdc++.h>

using namespace std;
int u, v, s;
queue<int> sunn;
int mark[1005];
vector<int> mincy[1005];

void BFS(int s){
    sunn.push(s);
    mark[s] = 1;
    cout << s << " ";
    while(!sunn.empty()){
        int x = sunn.front();
        sunn.pop();
        for (int j = 0; j < mincy[x].size();j++){
            if(mark[mincy[x][j]]==0){
                cout << mincy[x][j]<<" ";
                mark[mincy[x][j]] = 1;
                sunn.push(mincy[x][j]);
            }
        }
    }
}

int main(){
    int test;
    cin >> test;
    while(test--){
        cin >> u >> v >> s;
        for (int i = 1; i <= u;i++){
            mincy[i].clear();
        }
        memset(mark, 0, sizeof(mark));
        for (int i = 1; i <= v; i++)
        {
            int x, y;
            cin >> x >> y;
            mincy[x].push_back(y);
            mincy[y].push_back(x);
            }
        BFS(s);
        cout << endl;
    }
}