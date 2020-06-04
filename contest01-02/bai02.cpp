// tập con kế tiếp
// chưa làm được

#include<bits/stdc++.h>

using namespace std;
int a[1000];
int n,k;

void display(){
    for(int i=1;i<=k;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void sinhtohop(){
    for(int i=k;i>0;i--){
        if(a[i]!=n-k+i){
            a[i]++;
            for(int j=i+1;j<=k;j++){
                a[j]=a[j-1]+1;
            }
            break;
        }
    }
}

bool islast(){
    for(int i=1;i<=k;i++){
        if(a[i]!=n-k+i) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=k;i++){
            cin>>a[i];
        }
        if(islast()){
            for(int j=1;j<=k;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else{
            sinhtohop();
            display();
        }
    }
}