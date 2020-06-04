// chèn mảng

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,m,p;
        cin>>n>>m>>p;
        int a[100],b[100];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        cout<<"Test "<<i<<":"<<endl;
        for(int i=0;i<p;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<m;i++){
            cout<<b[i]<<" ";
        }
        for(int i=p;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}