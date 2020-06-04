// tính N^k modulo(10^9+7)

#include<bits/stdc++.h>
const long long base = 1e9+7;

using namespace std;

long long poww(long long n, long long k, long long base){
    if(k==0) return 1%base;
    if(k==1) return n%base;
    long long sum=poww(n,k/2,base);
    if(k%2==0) return ((sum%base*sum%base)%base)%base;
    else return (((sum%base*sum%base)%base)*n%base)%base;;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long k;
        cin>>n>>k;
        cout<<poww(n,k,base);
        cout<<endl;
    }
}