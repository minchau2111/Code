// cộng hai số theo hệ cơ số k;

#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    long long a,b;
    cin>>k>>a>>b;
    vector<int> mincy;
    int nho=0;
    while(a>0 || b>0){
        int temp=(a%10+b%10+nho);
        nho=temp/k;
        mincy.push_back(temp%k);
        a/=10;
        b/=10;
    }
    if(nho!=0)
        mincy.push_back(nho);
    for(int i=mincy.size()-1;i>=0;i--){
        cout<<mincy[i];
    }
    cout<<endl;
}