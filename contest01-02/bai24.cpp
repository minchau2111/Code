// in ra các dãy con có tổng bằng k

#include<bits/stdc++.h>

using namespace std;

int n,k;
bool mark=false;
int a[1000];
int x[1000];
int ans[1000];

void display(){
    vector<int> ans;
    ans.clear();
    for(int i=0;i<n;i++)
        if(x[i]==1) ans.push_back(a[i]);
    cout<<"[";
    for(int i=0;i<ans.size()-1;i++){
        cout<<ans[i]<<" ";
    }
    cout<<ans[ans.size()-1]<<"]";
    cout<<" ";
}

 void check(){
     int sum=0;
     for(int i=0;i<n;i++){
         if(x[i]==1){
             sum+=a[i];
         }
     }
     if(sum==k){
         mark=true;
         display();
     }
}


void Try(int i){
    for(int j=1;j>=0;j--){
        x[i]=j;
        if(i==n-1) check();
        else Try(i+1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>a[i];
            x[i]=0;
        }
        sort(a,a+n);
        mark=false;
        Try(0);
        if(!mark) cout<<"-1";
        cout<<endl;
    }
}