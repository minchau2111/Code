// xâu con chung dài nhất(không nhất thiết phải liền nhau)

#include<bits/stdc++.h>

using namespace std;
int f[1000][1000];

int mincy(string a, string b){
    int n=a.size(),m=b.size();
    a=' '+a;
    b=' '+b;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            f[i][j]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i]==b[j]) f[i][j]=f[i-1][j-1]+1;
            else f[i][j]=max(f[i-1][j],f[i][j-1]);
        }
    }
    return f[n][m];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<mincy(s1,s2);
        cout<<endl;
    }
}