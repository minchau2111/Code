// bố trí phòng họp

#include<bits/stdc++.h>

using namespace std;

struct sunn{
    int l;
    int r;
};

bool cmp(sunn a, sunn b){
    return a.r<b.r;
}

int main(){
    int n;
    cin>>n;
    sunn a[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i].l>>a[i].r;
    }
    sort(a,a+n,cmp);
    int tmp=0;
    int ans=1;
    for(int i=1;i<n;i++){
        if(a[i].l>=a[tmp].r){
            ans++;
            tmp=i;
        }
    }
    cout<<ans;
}