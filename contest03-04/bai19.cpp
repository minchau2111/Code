// phân số đơn vị

#include<bits/stdc++.h>

using namespace std;

void psdv(long long t, long long m){
    if(t%m==0){
        cout<<t/m;
        return;
    }
    else if(m%t==0){
        cout<<"1/"<<m/t;
        return;
    }
    else{
        long long n=((long long)m/t)+1;
        cout<<"1/"<<n<<" "<<"+"<<" ";
        psdv(n*t-m,m*n);
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        long long t,m;
        cin>>t>>m;
        psdv(t,m);
        cout<<endl;
    }
}