// dãy con có tổng bằng k

#include<bits/stdc++.h>

using namespace std;
int n,s;
int a[205];

void sunn(int l[]){
    l[s]=0,l[0]=1;
    for(int i=1;i<=n;i++){
        for(int t=s;t>=a[i];t--){
            if(l[t]==0 && l[t-a[i]]==1) l[t]=1;
        }
    }
    if(l[s]==1) cout<<"YES";
    else cout<<"NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>s;
        int l[s+5]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sunn(l);
        cout<<endl;
    }
}