// đưa ra cặp số nguyên tố đầu tiên có tổng đúng bằng n

#include<bits/stdc++.h>

using namespace std;

int n=100000;
bool prime[100005];

void sangnt(){
    memset(prime,true,sizeof(prime));
    for(int i=2;i<sqrt(n);i++){
        if(prime[i]==true){
            for(int j=i*i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        sangnt();
        for(int i=2;i<=n/2;i++){
            if(prime[i]==true && prime[n-i]==true){
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
    }
}