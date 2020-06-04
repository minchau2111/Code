// tính tích đa thức

#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        int a[m],b[n],c[m+n];
        for(int i=0;i<m;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<m+n-1;i++){
            c[i]=0;
            for(int j=0;j<m;j++){
                if(j<=i && i-j<n) c[i]+=a[j]*b[i-j];
            }
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}