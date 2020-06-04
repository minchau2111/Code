// nhà máy điện nguyên tử 2

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x[50],y[50];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int ax,ay,bx,by,q;
    cin>>ax>>ay>>bx>>by>>q;
    int r1,r2;
    for(int j=0;j<q;j++){
        cin>>r1>>r2;
        int dem=0;
        long long d1=0,d2=0;
        for(int i=0;i<n;i++){
            d1=(long long)sqrt((long long)((x[i]-ax)*(x[i]-ax))+(long long)((y[i]-ay)*(y[i]-ay)));
            d2=(long long)sqrt((long long)((x[i]-bx)*(x[i]-bx))+(long long)((y[i]-by)*(y[i]-by)));
            if(d1<=r1 || d2<=r2) dem++;
        }
        cout<<dem<<endl;
    }
}