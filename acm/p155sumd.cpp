// a[] có n phần tử, b[] có m phần tử;
// in ra m dòng dòng thứ i là số lượng số trong dãy a <= b[i];

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n+5],b[m+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
        if(b[i]<a[0]) cout<<"0"<<endl;
        else{
            int vt=0;
            int l=0;
            int r=n-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(a[mid]<=b[i]){
                    vt=mid;
                    l=mid+1;
                }
                else r=mid-1;
            }
            cout<<(vt+1)<<endl;
        }
    }
}