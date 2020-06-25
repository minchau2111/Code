// BFS tren do thi co huong

#include<bits/stdc++.h>

using namespace std;
int u,v,s;
int mark[1005];
vector<int>mincy[10000];
queue<int> sunn;

void BFS(int s){
    mark[s] = 1;
    sunn.push(s);
    cout << s << " ";
    while(!sunn.empty()){
        int x = sunn.front();
        sunn.pop();
        for (int j = 0; j < mincy[x].size();j++){
            if(mark[mincy[x][j]]==0){
                mark[mincy[x][j]] = 1;
                cout << mincy[x][j]<<" ";
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
        memset(mark, 0, sizeof(mark));
        for (int i = 1; i <= u;i++){
            mincy[i].clear();
        }
        for (int i = 1; i <= v;i++){
            int x,y;
            cin >> x >> y;
            mincy[x].push_back(y);
        }
        BFS(s);
        cout << endl;
    }
}