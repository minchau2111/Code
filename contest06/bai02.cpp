// sắp xếp theo |X-a[i]|

#include<bits/stdc++.h>

using namespace std;

int x,n;
bool sapxep(int m, int n){
    return fabs(m-x)<fabs(n-x);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>x;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        stable_sort(a,a+n,sapxep);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}