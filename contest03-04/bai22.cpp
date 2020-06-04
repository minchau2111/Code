// tim kiếm nhị phân kiểm tra xem k có ở trong mảng a k

#include<bits/stdc++.h>

using namespace std;
int n,k;

int search(int a[], int l, int r){
    if(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]==k) return mid;
        if(a[mid]>k) return search(a,l,mid-1);
        else return search(a,mid+1,r);
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n+5];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int l=1,r=n;
        if(search(a,l,r)==-1) cout<<"NO";
        else cout<<search(a,l,r);
        cout<<endl;
    }
}