// liệt kê hoán vị

#include<bits/stdc++.h>

using namespace std;

int n;
int a[100];

void init(){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}

void display(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
}

bool islast(){
    for(int i=1;i<=n;i++){
        if(a[i]<a[i+1]) return false;
    }
    return true;
}

void gentnext(){
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
    cin>>n;
    init();
    display();
    while(!islast()){
        gentnext();
        display();
    }
    return 0;
}