// số phong phú là số có tổng các ước trừ nó lớn hơn số đó

#include<bits/stdc++.h>

using namespace std;

int a[1000005];
int n=1000000;

void sanguoc(){
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
    a[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n/i;j++){
            a[i*j]+=i;
        }
    }
}

int main(){
   int l,r;
   cin>>l>>r;
   sanguoc();
   int dem=0;
   for(int i=l;i<=r;i++){
       if(a[i]-i>i) dem++;
   }
   cout<<dem;
}