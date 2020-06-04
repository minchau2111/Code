#include<bits/stdc++.h>

using namespace std;
int n,x;
int a[100];
int b[100];
int sum=0;
bool check=false;

void display(int i){
    cout<<"[";
    for(int j=1;j<i;j++){
        cout<<a[b[j]]<<" ";
    }
    cout<<a[b[i]]<<"]"<<" ";
}

void Try(int i){
    for(int j=1;j<=n;j++){
        if(sum>x) return;
        if(a[j]>=a[b[i-1]]){
            if(sum>x) return;
            b[i]=j;
            sum+=a[j];
            if(sum==x){
                check=true;
                display(i);
            }
            else Try(i+1);
            sum-=a[b[i]];
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        sum=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        Try(1);
        if(check==false) cout<<"-1";
        cout<<endl;
    }
}