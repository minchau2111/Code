// bắt đầu và kết thúc

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        if((s[0]-'0')==(s[n-1]-'0')) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}