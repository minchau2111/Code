// giá trị nhỏ nhất của biểu thức

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n+5];
        long long b[n+5];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++) cin>>b[i];
        sort(b,b+n,greater<long long>());
        long long ans=0;
        for(int i=0;i<n;i++){
            long long tmp=a[i]*b[i];
            ans+=tmp;
        }
        cout<<ans;
        cout<<endl;
    }
}