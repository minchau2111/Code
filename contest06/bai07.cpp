// tìm mảng con liên tiếp để sắp xếp lại được mảng lớn

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5],b[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(b[i]!=a[i]){
                cout<<i+1<<" ";
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(b[i]!=a[i]){
                cout<<i+1;
                break;
            }
        }
        cout<<endl;
    }
}