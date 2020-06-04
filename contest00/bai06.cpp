// in ma trận xoắn ốc theo chiều kim đồng hồ

#include<bits/stdc++.h>

using namespace std;
int a[50][50],n;

int xoanoc(){
    int dem=0,x=n*n,i,j,hang=n-1,cot=n-1;
    while(dem<=n/2){
        for(i=dem;i<=cot;i++) a[dem][i]=x--;
        for(i=dem+1;i<=hang;i++) a[i][cot]=x--;
        for(i=cot-1;i>=dem;i--) a[hang][i]=x--;
        for(i=hang-1;i>dem;i--) a[i][dem]=x--;
        dem++;hang--;cot--;
    }
}

int xuat(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        cout<<"Test "<<i<<":"<<endl;
        xoanoc();
        xuat();
    }
}