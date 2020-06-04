// bán vé

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=a[0];
    for(int i=1;i<n;i++){
        if(sum<0){
            cout<<"NO";
            return 0;
        }
        else{
            if(a[i]==25) sum+=25;
            else if(a[i]==50) sum-=25;
            else if(a[i]==100) sum-=75;
        }
    }
    if(sum<0) cout<<"NO";
    if(sum>=0) cout<<"YES";
}