// ma trận xoắn ốc fibonaci

#include<bits/stdc++.h>

using namespace std;
long long f[1000],a[100][100];
long long n;

void fibonaci(){
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=92;i++){
        f[i]=f[i-1]+f[i-2];
    }
}

int xoanoc(){
    int dem=0,i,x=1,hang=n-1,cot=n-1;
    while(dem<=n/2){
        for(i=dem;i<=cot;i++) a[dem][i]=f[x++];
        for(i=dem+1;i<=hang;i++) a[i][cot]=f[x++];
        for(i=cot-1;i>=dem;i--) a[hang][i]=f[x++];
        for(i=hang-1;i>dem;i--) a[i][dem]=f[x++];
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
        fibonaci();
        xoanoc();
        cout<<"Test "<<i<<":"<<endl;
        xuat();
    }
}