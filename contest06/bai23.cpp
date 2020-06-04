// tìm số k có mặt trong mảng a

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum =(long long) (n * n + n) / 2;
        int a[n + 5];
        for (int i = 0; i < n - 1;i++){
            cin >> a[i];
            sum -= a[i];
        }
        cout << sum;
        cout << endl;
    }
}