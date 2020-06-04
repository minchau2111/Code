// phần tử khác nhau

#include<bits/stdc++.h>

using namespace std;

long long search(int l, int r, long long a[], long long b[]){
    if(l<=r){
        int mid=r+(l-r)/2;
        if(a[mid-1]==b[mid-1] && a[mid]!=b[mid]) return mid;
        if(a[mid]==b[mid]) return search(mid+1,r,a,b);
        else return search(l,mid-1,a,b);
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
        long long b[n+5];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n-1;i++)
            cin>>b[i];
        int l=1,r=n-1;
        cout<<search(l,r,a,b);
        cout<<endl;
    }
}