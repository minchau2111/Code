// sinh hoán vị quay lui

#include<bits/stdc++.h>

using namespace std;

int n;
bool check[1000]={0};
int a[1000];

void display(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<" ";
}

void Try(int x){
    for(int i=1;i<=n;i++){
        if(!check[i]){
            a[x]=i;
            check[i]=1;
            if(x==n) display();
            else Try(x+1);
            check[i]=0;
        }
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