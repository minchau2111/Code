// kiem tra chu trinh bang DFS

#include<bits/stdc++.h>

using namespace std;
int u, v;
vector<int> ke[1005];
int visit[1005];

void DFS(int u){
    stack<int> st;
    st.push(u);
    visit[u] = 1;
    for (int i = 1; i <= u;i++){
        int x = st.top();
        st.pop();
        for (int j = 0; j < ke[x][j];j++){
            if(visit[ke[x][j]]==0){
                visit[ke[x][j]] = 1;
                st.push(x);
                st.push(ke[x][j]);
                break;
            }
        }
    }
}

bool deg(){
    for (int i = 1; i <= u;i++){
        int dem = ke[i].size();
        if(dem%2!=0)
            return false;
    }
    return true;
}

bool isall(){
    for (int i = 1;i<=u;i++){
        if(visit[i]==0)
            return false;
    }
    return true;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        cin >> u >> v;
        for (int i = 1;i<=v;i++){
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        DFS(1);
        if(isall()==true && deg()==true)
            cout << "YES";
        else
            cout << "NO";
    }
}
