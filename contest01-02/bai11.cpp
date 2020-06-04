// chuyển gray thành nhị phân

#include<bits/stdc++.h>

using namespace std;

int a[100];
char mincy(char c){
    return(c=='0')?'1':'0';
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans;
        ans+=s[0];
        for(int i=1;i<s.length();i++){
            if(s[i]=='0'){
                ans+=ans[i-1];
            }
            else{
                ans+=mincy(ans[i-1]);
            }
        }
        cout<<ans;
        cout<<endl;
    }
}