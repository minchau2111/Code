// floor(x)= phần tử lớn nhất trong mảng <=x

#include<bits/stdc++.h>

using namespace std;
int n;
long long k;

int search(long long a[], int l, int r){
    if(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]==k) return mid;
        if(a[mid-1]<=k && a[mid]>k) return mid-1;
        if(a[mid]>k) return search(a,l,mid-1);
        else return search(a,mid+1,r);
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n+5];
        cin>>k;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        cout<<search(a,1,n);
        cout<<endl;
    }
}