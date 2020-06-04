// prime 18

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int dem=0;
        int m,n,a,b;
        cin>>m>>n>>a>>b;
        for(int i=m;i<=n;i++){
            if(i%a==0 || i%b==0) dem++;
        }
        cout<<dem;
        cout<<endl;
    }
}