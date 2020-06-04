// số phận
// mật mã mở két\

// acm problem 03 chưa nộp

#include<bits/stdc++.h>

using namespace std;

void timuoc(int x){
    for(int i=2;i<=x;i++){
        if(x%i==0) cout<<i;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
            timuoc(a[i]);
        }
        cout<<endl;
    }
}