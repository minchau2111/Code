// chuyen ma tran ke sang danh sach ke

#include<bits/stdc++.h>
using namespace std;
int ke[1005][1005];
vector<int> sunn[10000];

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
        sunn[i].clear();
    }
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cin >> ke[i][j];
            if(ke[i][j]==1)
                sunn[i].push_back(j);
        }
    }
    for (int i = 1; i <= n;i++){
        for (int j = 0; j < sunn[i].size();j++){
            cout << sunn[i][j] << " ";
        }
        cout << endl;
    }
}