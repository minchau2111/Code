// di chuyển trong ma trận

#include<bits/stdc++.h>

using namespace std;

int a[100][100];
int dem;
int n,m;

int Try(int i, int j){
    if(i==1 || j==1) return 1;
    return Try(i-1,j)+Try(i,j-1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        dem=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        cout<<Try(n,m)<<endl;
    }
}
