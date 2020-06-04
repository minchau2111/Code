// số fibonaci thứ n

#include<bits/stdc++.h>
const long long base=1e9+7;

using namespace std;

struct matran{
    long long c[2][2];
    matran(){
        c[0][0]=0;
        c[0][1]=1;
        c[1][0]=1;
        c[1][1]=1;
    }
};

matran operator*(matran a, matran b){
    matran res;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res.c[i][j]=0;
            for(int k=0;k<2;k++){
                res.c[i][j]=(res.c[i][j]+a.c[i][k]*b.c[k][j])%base;
            }
        }
    }
    return res;
}

matran powermod(matran a, long long n){
    if(n==1) return a;
    else if(n%2!=0) return powermod(a,n-1)*a;
    else{
         matran tmp=powermod(a,n/2);
         return tmp*tmp;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        matran A;
        A=powermod(A,n);
        cout<<A.c[0][1];
        cout<<endl;
    }
    return 0;
}

