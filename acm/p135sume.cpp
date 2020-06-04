// bản nhạc

#include<bits/stdc++.h>

using namespace std;
int a[50];

int main(){
    for(int i=0;i<8;i++){
        cin>>a[i];
    }
    bool check1=true;
    bool check2=true;
    for(int i=0;i<8;i++){
        if(a[i]!=i+1) check1=false;
        if(a[i]!=8-i) check2=false;
    }
    if(check1) cout<<"ascending";
    if(check2) cout<<"descending";
    if(!check1 && !check2) cout<<"mixed";
}