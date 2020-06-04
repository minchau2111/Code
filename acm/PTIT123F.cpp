//ngươi cai ngục say rượu

#include<bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n+5]={0};
       int x=1;
       while(x<=n){
           for(int i=1;i<=n;i++){
               if(i%x==0){
                   if(a[i]==0) a[i]++;
                   else a[i]--;
               }
           }
           x++;
       }
       int dem=0;
       for(int i=1;i<=n;i++){
           if(a[i]==1) dem++;
       }
       cout<<dem;
       cout<<endl;
   }
}