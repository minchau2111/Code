//bieu dien do thi co huong

#include<bits/stdc++.h>

using namespace std;
vector<int> sunn[10000];

int main(){
    int t;
    cin >> t;
    while(t--){
        int u, v;
        cin >> u >> v;
        for (int i = 1; i <= u;i++){
            sunn[i].clear();
        }
        for (int i = 1; i <= v;i++){
            int x, y;
            cin >> x >> y;
            sunn[x].push_back(y);
            
        }
        for (int i = 1; i <= u;i++){
            cout << i << ": ";
            for (int j = 0; j < sunn[i].size();j++){
                cout << sunn[i][j] << " ";
            }
            cout << endl;
        }
    }
}