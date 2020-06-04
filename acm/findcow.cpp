// find the cow

#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int dem=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==')' && s[i+1]==')') dem++;
    }
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==')' && s[i+1]==')') dem--;
        if(s[i]=='(' && s[i+1]=='(') ans+=dem;
    }
    cout<<ans;
}