//  tìm mảng hợp mảng giao của hai mảng chưa sắp xếp

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+5],b[m+5];
        vector <int> x;
        vector <int> y;
        for(int i=0;i<n;i++){
            cin>>a[i];
            x.push_back(a[i]);
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            x.push_back(b[i]);
        }
        sort(x.begin(),x.end());
        cout<<x[0]<<" ";
        for(int i=1;i<n+m;i++){
            if(x[i]!=x[i-1]){
                if(i==n+m-1) cout<<x[i];
                else cout<<x[i]<<" ";
            }
            else{
                y.push_back(x[i]);
               // cout<<a[i];
            }
        }
        cout<<endl;
        for(int i=0;i<y.size();i++){
            cout<<y[i]<<" ";
        }
        cout<<endl;
    }
}