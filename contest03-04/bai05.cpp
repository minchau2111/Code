// chia mảng

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[1000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(k>n-k) k=n-k;
            if(i<k) x+=a[i];
            else y+=a[i];
        }
        if(x>y) cout<<x-y;
        else cout<<y-x;
        cout<<endl;
    }
}