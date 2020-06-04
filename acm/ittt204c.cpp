// tức giận

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        int dem=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                dem=0;
            }
            else dem++;
        }
        cout<<dem;
        cout<<endl;
    }
}