// số ma thuật ghép bởi 1, 14, 144

#include<bits/stdc++.h>

using namespace std;

string s;
int n;

bool check(){
    for(int i=0;i<n;i++){
        if(s[i]!='1' && s[i]!='4') return false;
    }
    return true;
}
bool check1(){
    for(int i=0;i<n-2;i++){
        if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4') return false;
    }
    return true;
}

int main(){
    cin>>s;
    n=s.size();
    if(s[0]=='1' && check() && check1()) cout<<"YES";
    else cout<<"NO";
}