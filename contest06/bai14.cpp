// tìm cặp số nguyên tố đầu tiên có tổng bằng n

#include<bits/stdc++.h>

using namespace std;
int n;
bool a[1000005];

void sangnt(int n){
    memset(a, true, sizeof(a));
    for (int i = 2; i < sqrt(n);i++){
        if(a[i]==true){
            for (int p = i * i; p < n;p+=i){
                a[p] = false;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        sangnt(n);
        bool check = false;
        for (int i = 2; i <= n / 2;i++){
            if(a[i]==true && a[n-i]==true){
                cout << i << " " << n - i;
                check = true;
                break;
            }
        }
        if (check == false)
            cout << "-1";
        cout << endl;
    }
}