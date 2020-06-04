// số tăng giảm

#include<bits/stdc++.h>

using namespace std;

string s;
int n;

bool check(){
    for(int i=0;i<n-1;i++){
        if((s[i]-'0')>(s[i+1]-'0')) return false;
    }
    return true;
}

bool check1(){
    for(int i=0;i<n-1;i++){
        if((s[i]-'0')<(s[i+1]-'0')) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        n=s.size();
        if(check()) cout<<"YES";
        else if(check1()) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}