// chiếc gậy ma thuật

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+5];
    int b[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    bool check=false;
    for(int i=0;i<n;i++){
        if(a[i]<=b[i]) check=true;
        else{
            check=false;
            break;
        }
    }
    if(check) cout<<"YES";
    else cout<<"NO";
}