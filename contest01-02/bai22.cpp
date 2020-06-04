// di chuyển trong mê cung 1

#include<bits/stdc++.h>

using namespace std;

int a[100][100];
int n;
vector<string> mincy; 
string ans="";

void Try(int i,int j){
    if(a[1][1]==0 || a[n][n]==0) return ;
    if(i==n && j==n){
        mincy.push_back(ans);
    }
    if(a[i+1][j]==1 && i!=n){
        ans+='D';
        Try(i+1,j);
        ans.erase(ans.length()-1);
    }
    if(a[i][j+1]==1 && j!=n){
        ans+='R';
        Try(i,j+1);
        ans.erase(ans.length()-1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ans="";
        mincy.clear();
        cin>>n;
        for(int i=0;i<100;i++){
            for(int j=0;j<100;j++){
                a[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        Try(1,1);
        if(mincy.empty()) cout<<"-1";
        else for(int i=0;i<mincy.size();i++) cout<<mincy[i]<<" ";
        cout<<endl;
    }
}