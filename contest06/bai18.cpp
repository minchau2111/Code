// cho hai mảng yêu cầu hợp thành mảng sắp xếp

#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n+5];
        int b[m + 5];
        int x[n + m];
        for (int i = 0; i < n;i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = 0;i < m;i++){
            cin >> b[i];
        }
        sort(b, b + m);
        int i = 0, j = 0, k = 0;
        while(i<n && j<m){
            if(a[i]<b[j])
                x[k++] =a[i++];
            else
                x[k++] = b[j++];
        }
        while (i < n)
            x[k++] = a[i++];
        while (j < m)
            x[k++] = b[j++];
        for (int i = 0; i < k;i++){
            cout << x[i] << " ";
        }
        cout << endl;
    }
}