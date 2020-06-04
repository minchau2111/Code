// mảng đối xứng

#include<bits/stdc++.h>

using namespace std;

int  kiemtra(int a[],int n){
    
     for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            return 0;
        }
    }
    return 1;
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
        }
        if(kiemtra(a,n)) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}