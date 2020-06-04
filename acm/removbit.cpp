// xoá một chữ số trong dãy nhị phân để được số lớn nhất

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int ok=0;
    string ans;
    for(int i=0;i<n;i++){
        if(ok==1) ans+=s[i];
        else{
            if(s[i]=='1') ans+=s[i];
            else ok=1;
        }
    }
    if(ok==0){
        for(int i=1;i<n;i++) cout<<s[i];    
    }
    else cout<<ans;
}