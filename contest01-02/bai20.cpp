// dãy số 2
// hàng i là tổng hai phần tử liên tiếp của hàng i+1

#include<bits/stdc++.h>

using namespace std;

void display(int a[],int n){
    cout<<"[";
    for(int i=0;i<n;i++){
        if(i==n-1) cout<<a[i];
        else{
            cout<<a[i]<<" ";
        }
    }
    cout<<"]";
    cout<<" ";
}

void Mincy(int a[],int n){
    if(n<1) return;
    else{
        int b[n-1];
        for(int i=0;i<n-1;i++){
            int x=a[i]+a[i+1];
            b[i]=x;
        }
        Mincy(b,n-1);
        display(a,n);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int a[100];
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Mincy(a,n);
        cout<<endl;
    }
}