// số dãy=2^n-1;

#include<bits/stdc++.h>
const long long base = 123456789;

using namespace std;

long long poww(long long n, long long k){
    if(k==0) return 1%base;
    if(k==1) return n%base;
    long long sum=poww(n,k/2);
    if(k%2==0) return ((sum%base*sum%base)%base)%base;
    else return (((sum%base*sum%base)%base)*n%base)%base;;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<poww(2,n-1);
        cout<<endl;
    }
}