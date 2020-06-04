// tìm x trong mảng sắp xếp vòng

#include<bits/stdc++.h>

using namespace std;

int vitri(int a[],int l, int r){
    if(l<r){
        int mid=r+(l-r)/2;
        if(mid<r && a[mid]>a[mid+1])
            return mid;
        if(mid>l && a[mid]<a[mid-1])
            return mid - 1;
        if(a[l]>a[mid])
            return vitri(a, l, mid - 1);
        return vitri(a, mid + 1, r);
    }
    return -1;
}

int binarysearch(int a[], int l, int r, int x){
    if(l<r){
        int mid = r + (l - r) / 2;
        if(x==a[mid])
            return mid;
        if(x>a[mid])
            return binarysearch(a, mid + 1, r, x);
        return binarysearch(a, l, mid - 1, x);
    }
    return -1;
}

int result(int a[], int n, int x){
    int mark = vitri(a, 0, n - 1);
    if(mark==-1) 
        return binarysearch(a, 0, n - 1, x);
    if(a[mark]==x)
        return vitri(a, 0, n - 1);
    if(a[0]<x)
        return binarysearch(a, 0, mark - 1, x);
    return binarysearch(a, mark + 1, n - 1, x);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n + 5];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        cout << result(a, n, x)+1;
        cout << endl;
    }
}