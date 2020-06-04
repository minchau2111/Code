#include<bits/stdc++.h>

using namespace std;

int a[100][100];
int n,m;
int ans=-1;

void dfs(int u,int i){
    ans=max(ans,i);
    for(int v=0;v<n;v++){
        if(a[u][v] == 1){
            a[u][v]=0;
            a[v][u]=0;
            dfs(v,i+1);
            a[u][v]=1;
            a[v][u]=1;
        }
    }
}

int main(){
    int T=1;
    cin >> T;
    while(T--){
         cin >> n >> m;
        memset(a,0,sizeof(a));
        for(int i=0;i<m;i++){
            int x,y;
            cin >> x >> y;
            a[x][y]=1;
            a[y][x]=1;
        }
        ans=-1;
        for(int i=0;i<n;i++){
            dfs(i,0);
        }
        cout << ans<<endl;
    }
}