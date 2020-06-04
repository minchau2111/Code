// đếm số 0;

#include<bits/stdc++.h>

using namespace std;

int search(int l,int r, int a[]){
    if(l<=r){
        int mid=r+(l-r)/2;
        if((mid==0 || a[mid-1]==0) && a[mid-1]==1) return mid;
        if (a[mid]==1) return search(l,mid-1,a);
        return search(mid+1,r,a);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<search(0,n-1,a);
        cout<<endl;
    }
}