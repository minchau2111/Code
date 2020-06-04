// lớn nhất, nhỏ nhất, lớn thứ hai, nhỏ thứ hai...

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        for(int i=n;i>0;i--){
            if(i==n-i+1){
                cout<<a[i];
                break;
            }
            if(i==n-i){
                break;
            }
            else cout<<a[i]<<" "<<a[n-i+1]<<" ";
        }
        cout<<endl;
    }
}