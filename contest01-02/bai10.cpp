// mã nhị phân chuyển sang mã gray

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int a[100],ans[100];
        for(int i=0;i<n;i++){
            a[i]=s[i]-'0';
        }
        ans[0]=a[0];
        for(int i=1;i<=n;i++){
            ans[i]=a[i]^a[i-1];
        }
        for(int i=0;i<n;i++){
            cout<<ans[i];
        }
        cout<<endl;
    }
}