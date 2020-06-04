// só nguyên dương nhỏ nhất

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[200000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    //for(int i=0;i<n;i++) cout<<a[i]<<" ";
    int x=a[k-1];
    if(x!=a[k]) cout<<x;
    else if(x==a[k]) cout<<"-1";
}