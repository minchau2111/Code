// tìm ra chỗ trống có chỉ số nhỏ nhất

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[3005];
    memset(a,false,sizeof(a));
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            cout<<i;
            return 0;
        }
    }
    cout<<n+1;
}