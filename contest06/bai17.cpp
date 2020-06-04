// tích giữa phần tử lón nhất của mảng a vs min của mảng b;

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        long long a[n + 5];
        long long b[m + 5];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < m;i++){
            cin >> b[i];
        }
        sort(b, b + m);
        long long x = a[n - 1] * b[0];
        cout << x;
        cout << endl;
    }
}