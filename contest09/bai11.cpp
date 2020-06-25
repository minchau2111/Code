// tim duong di tren do thi co huong

#include<bits/stdc++.h>

using namespace std;
int u, v, s, t;
int ke[1005][1005];
int mark[1005];
int x[1005];
vector<int> mincy;

void DFS(int s){
    mark[s] = 1;
    for (int i = 1; i <= u;i++){
        if(mark[i]==0 && ke[s][i]==1){
            mark[i] = 1;
            x[i] = s;
            DFS(i);
        }
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        cin >> u >> v >> s >> t;
        memset(x, 0, sizeof(x));
        memset(mark, 0, sizeof(mark));
        mincy.clear();
        for (int i = 1;i<=u;i++){
            for (int j = 1; j <= u;j++){
                ke[i][j] = 0;
            }
        }
        for (int i = 1; i <= v;i++){
            int x,y;
            cin >> x >> y;
            ke[x][y] = 1;
        }
        DFS(s);
        if(x[t]==0)
            cout << "-1";
        else{
            mincy.push_back(t);
            while(x[t]!=s){
                mincy.push_back(x[t]);
                t = x[t];
            }
            mincy.push_back(s);
            reverse(mincy.begin(), mincy.end());
            for (int i = 0; i < mincy.size();i++){
                cout << mincy[i] << " ";
            }
        }
        cout << endl;
    }
}