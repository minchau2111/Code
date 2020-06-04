// gấp đôi dãy số

#include<bits/stdc++.h>

using namespace std;

long long poww(long long x, long long y){
    long long ans=1;
    for(int i=0;i<y;i++){
        ans*=x;
    }
    return ans;
}

long long sunn(long long n, long long k){
    long long mid=poww(2,n-1);
    if(k==mid) return n;
    if(k<mid) return sunn(n-1,k);
    else return sunn(n-1,k-mid);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        cout<<sunn(n,k);
        cout<<endl;
    }
}