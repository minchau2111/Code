// quick sort

#include <bits/stdc++.h>
#define i64 long long
#define fi first
#define se second
#define rz resize
#define pb push_back
#define mp make_pair
#define whatIs(a) cerr << #a " is " << (a) << endl;
 
const int N = 200005;
const long long base = 1e9+7;
const long long inf = 1e18+7;
 
using namespace std;

int search(int l, int r, int a[]){
    int x = a[r];
    int k = l - 1;
    for (int i = l; i < r;i++){
        if(a[i]<x){
            k++;
            swap(a[k], a[i]);
        }
    }
    swap(a[k + 1], a[r]);
    return k + 1;
}

void quicksort(int l,int r, int a[]){
    if(l<r){
        int p = search(l,r,a);
        quicksort(l,p-1,a);
        quicksort(p + 1, r, a);
    }
 
}
 
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0;i<n;i++){
            cin >> a[i];
        }
        quicksort(0, n - 1, a);
        for (int i = 0; i < n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
