// sắp xếp công việc

#include<bits/stdc++.h>

using namespace std;

struct mincy{
    int l;
    int r;
};

bool sapxep(mincy a, mincy b){
    return a.r<b.r;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        mincy a[n+5];
        int s[1005],f[1005];
        for(int i=0;i<n;i++){
            cin>>s[i];
            a[i].l=s[i];
        }
        for(int i=0;i<n;i++){
            cin>>f[i];
            a[i].r=f[i];
        }
        sort(a,a+n,sapxep);
        int tmp=0;
        int ans=1;
        for(int i=1;i<n;i++){
            if(a[i].l>=a[tmp].r){
                ans++;
                tmp=i;
            }
        }
        cout<<ans;
        cout<<endl;
    }
}