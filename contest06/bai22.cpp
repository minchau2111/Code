// tìm X có trong mảng hay không

#include<bits/stdc++.h>

using namespace std;

int search(int a[], int l, int r,int x){
    int mid = r + (l - r) / 2;
    if(l<=r){
        if(a[mid]==x) return 1;
        if(a[mid]>x)
            return search(a, l, mid - 1, x);
        else
            return search(a, mid + 1, r, x);
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int a[n + 5];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        cout << search(a, 0, n - 1,x);
        cout << endl;
    }
}