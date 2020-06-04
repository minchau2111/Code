// xâu nhị phân độ dài n có k bit 1

#include<bits/stdc++.h>

using namespace std;

int n,k;
int dem;
int a[100];

void display(){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
}

void sinhnhiphan(){
    for(int i=n-1;i>=0;i--){
        if(a[i]==0){
            a[i]=1;
            break;
        }
        else a[i]=0;
    }
    for(int i=0;i<n;i++){
        if(a[i]==1) dem++;
    }
    if(dem==k){
        display();
    }
}

bool islast(){
    for(int i=0;i<n;i++){
        if(a[i]!=1) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++){
            a[i]=0;
        }
        while(!islast()){
            dem=0;
            sinhnhiphan();
        }
    }
}