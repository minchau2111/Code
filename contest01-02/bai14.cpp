// tập quân sự

#include<bits/stdc++.h>

using namespace std;
int n,k;
int a[100];
int check[100]={0};

bool islast(){
    for(int i=1;i<=k;i++){
        if(a[i]!=n-k+i) return false;
    }
    return true;
}

void gentNext(){
    for(int i=k;i>0;i--){
        if(a[i]!=n-k+i){
            a[i]++;
            for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
            break;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
         cin>>n>>k;
         int dem=k;
         for(int i=0;i<=100;i++){
             check[i]=0;
         }
         for(int i=1;i<=k;i++){
             cin>>a[i];
             check[a[i]]++;
         }
         if(islast()) cout<<k;
         else{
             gentNext();
            //  for(int i=1;i<=k;i++){
            //      cout<<a[i]<<" ";
            //  }
            for(int i=1;i<=k;i++){
                check[a[i]]++;
                if(check[a[i]]==2) dem--;
            }
            cout<<dem;
         }
         cout<<endl;
    }
}