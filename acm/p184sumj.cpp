// luỹ thừa n^m modulo k;
// nộp sai;

#include<bits/stdc++.h>

using namespace std;

long long modulo(long long n, long long m, long long k){
    if(m==0) return 1%k;
    if(m==1) return n%k;
    if(m%2==0) return ((modulo(n,m/2,k)*modulo(n,m/2,k))%k)%k;
    else return (((modulo(n,m/2,k)*modulo(n,m/2,k))%k)*(n%k))%k;
}

int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    cout<< modulo(n,m,k);
    cout<<endl;
}