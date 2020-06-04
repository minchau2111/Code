// tổng lẻ

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==1) cout<<"YES"<<endl;
        else{
            int mark=0;
            int mark1=0;
            for(int i=0;i<n;i++){
                if(a[i]%2==0) mark++;
                else mark1++;
            }
            if(mark==0 || mark1== 0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}