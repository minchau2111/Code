// xem phim
// tim tổng khối lượng bỏ max có thể xếp lên xe;
// chưa lm đk

#include<bits/stdc++.h>

using namespace std;

int c,n,ans=0;
int w[10000];

int sorttang(int a, int b){
    return a>b;
}
void Try(int i, int pos=0){
    if(pos==0){
            for(i;i<n;i++){
            while(ans<=c){
                ans+=w[i];
            }
            pos=i;
        }
        if(ans==c) cout<<ans;
        if(ans<c) Try(i+1);
    }
    else{
        for(pos;i<n;i++){
        while(ans<=c){
            ans+=w[i];
        }
        pos=i;
    }
    if(ans==c) cout<<ans;
    if(ans<c) Try(i+1);
    }
    cout<<ans;
}

int main(){
    cin>>c>>n;
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    sort(w,w+n,sorttang);
    Try(1);
}