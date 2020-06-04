// tổng hai số
// đếm xem có bao nhiêu cặp số có tổng bằng số M cho trước

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int dem=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum=a[i]+a[j];
            if(sum==m) dem++;
        }
    }
    cout<<dem;
}