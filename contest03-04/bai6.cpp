#include <bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
         int n;
        cin >> n;
        int a[n+5];
        int b[n+5];
        for(int i=0;i<n;i++){
            cin >> a[i];
            b[i]=a[i];
        }   
        sort(b,b+n);
        bool check=true;
        int mid=n/2;
        for(int i=mid;i<n;i++){
            // cout << a[i]<<' '<<b[i];
            if(a[i]!=b[i] && a[i]!=b[n-i-1]) check=false;
        }
        if(check) cout << "Yes"<<endl;
        else cout << "No"<<endl;
    }
    return 0;
}