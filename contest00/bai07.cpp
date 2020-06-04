// tích của A với ma trận chuyển vị của A

#include<bits/stdc++.h>

using namespace std;

int a[100][100],b[100][100],c[100][100],m,n,l;

int nhap(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}

int chuyenvi(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[j][i]=a[i][j];
        }
    }

}

int tich(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=0;
            for(int l=0;l<m;l++){
                b[i][j]+=a[i][l]*c[l][j];
            }
        }
    }
}

int xuat(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>m;
        nhap();
        chuyenvi();
        tich();
         cout<<"Test "<<i<<": "<<endl;
        xuat();
    }
}