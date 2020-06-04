#include<bits/stdc++.h>

using namespace std;

int x[100],res[100];
int n;

void result(){
    for(int i=1;i<=n;i++){
        cout<<res[i];
    }
    cout<<" ";
}

void Try(int k){
    for(int i=0;i<2;i++){
        x[k]=i;
        res[k]=x[k]^x[k-1];
        if(k==n) result();
        else Try(k+1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
         cin>>n;
        Try(1);
        cout<<endl;
    }  
}