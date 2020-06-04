// sinh hoán vị

#include<bits/stdc++.h>

using namespace std;

int a[1000];
int n;

bool islast(){
    for(int i=1;i<=n-1;i++){
        if(a[i]<a[i+1]) return false;
    }
    return true;
}

void sinh(){
    int pos=0;
        for(int i=n-1;i>0;i--){
            if(a[i]<a[i+1]){
                pos=i;
                break;
            }
        }
        for(int i=n;i>0;i--){
            if(a[i]>a[pos]){
                swap(a[i],a[pos]);
                break;
            }
        }
        int l=pos+1;
        int r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            a[i]=i;
            cout<<a[i];
        }
        cout<<" ";
        while(!islast()){
            sinh();
            for(int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}