// xâu fibonaci AB

#include<bits/stdc++.h>

using namespace std;
long long f[100];
long long n,k;

void fibonaci(){
    f[1]=1;
    f[2]=1;
    for(int i=3;i<93;i++){
        f[i]=f[i-1]+f[i-2];
    }
}

long long search(long long k, long long n){
    if(n==1) return 1;
    else if(n==2) return 2;
    else if(k>f[n-2]) return search(k-f[n-2],n-1);
    else if(k<=f[n-2]) return search(k,n-2);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        fibonaci();
        if(search(k,n)==1) cout<<"A";
        else cout<<"B";
        cout<<endl;
    }
}