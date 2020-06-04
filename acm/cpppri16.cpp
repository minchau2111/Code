// prime 16

#include<bits/stdc++.h>

using namespace std;
long long n;
bool prime[1000000];

void sangnt(){
    memset(prime,true,sizeof(prime));
    for(int i=2;i<sqrt(n);i++){
        if(prime[i]==true){
            for(int p=i*i;p<n;p+=i){
                prime[i]=false;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int dem=0;
        cin>>n;
        sangnt();
        for(int i=2;i<sqrt(n);i++){
            if(prime[i]==true) dem++;
        }
        cout<<dem<<endl;
    }
}