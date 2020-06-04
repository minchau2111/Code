// sắp xếp theo số lần xuất hiện các phầN tử trong mảng

#include<bits/stdc++.h>

using namespace std;
int x[100005];

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 5];
        memset(x,0,sizeof(x));
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n;i++){
            x[a[i]]++;
        }
        stable_sort(x, x + 100005, greater<int>());
        for (int i = 0; i < sizeof(x);i++){
            if(x[i]!=0)
                cout << i << " ";
        }
        cout << endl;
    }
}