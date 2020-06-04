// đổi tiền

#include<bits/stdc++.h>

using namespace std;
int a[]={1,2,5,10,20,50,100,200,500,1000};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int dem=0;
        for(int i=9;i>=0;i--){
            int x=n/a[i];
            if(x!=0){
                dem+=x;
              //  cout<<dem<<" ";
            }
            n%=a[i];
        }
        cout<<dem;
        cout<<endl;
    }
}