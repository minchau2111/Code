// hoán vị kế tiếp

#include<bits/stdc++.h>

using namespace std;

int a[1000];
int n;

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a[0]=100000000;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int pos=0;
        for(int i=n-1;i>=1;i--){
            if(a[i]<a[i+1]){
                pos=i;
                break;
            }
        }
        for(int i=n;i>=1;i--){
            if(a[i]>a[pos]){
                swap(a[i],a[pos]);
                break;
            }
        }
        int l=pos+1;
        int r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}