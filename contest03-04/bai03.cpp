// tìm max Ai*i modulo 10^9+7

#include<bits/stdc++.h>
const long long base = 1e9+7;

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n+5];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            long long tmp=(a[i]*i)%base;
            sum=(sum%base+tmp%base)%base;
        }
        cout<<sum;
        cout<<endl;
    }
}