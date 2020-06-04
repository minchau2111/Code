// luỹ thừa ma trận

#include<bits/stdc++.h>
const long long base=1e9+7;

using namespace std;

struct matran{
    int n;
    long long c[20][20]={0};
};

matran operator*(matran a, matran b){
    matran res;
    res.n=a.n;
    for(int i=0;i<a.n;i++){
        for(int j=0;j<b.n;j++){
            res.c[i][j]=0;
            for(int k=0;k<b.n;k++){
                res.c[i][j]=(res.c[i][j]+a.c[i][k]*b.c[k][j])%base;
            }
        }
    }
    return res;
}

matran powermod(matran a, long long k){
    matran tmp;
    tmp.n=a.n;
    if(k==1) return a;
    else if(k%2!=0) return powermod(a,k-1)*a;
    else{
         tmp=powermod(a,k/2);
         return tmp*tmp;
    }
}

void output(matran a){
    for(int i=0;i<a.n;i++){
         for(int j=0;j<a.n;j++){
                cout<<a.c[i][j]<<" ";
         }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long k;
        matran a;
        matran b;
        cin>>a.n>>k;
        b.n=a.n;
        for(int i=0;i<a.n;i++)
            for(int j=0;j<a.n;j++)
                cin>>a.c[i][j];
        b=powermod(a,k);
        b.n=a.n;
        output(b);
    }
}