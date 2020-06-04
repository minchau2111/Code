#include <bits/stdc++.h>

using namespace std;

void Solve(){
    string s;
    cin >> s;
    string ans="";
    int sunn=1;
    int tmp=0;
    int n=s.size();
    for(int i=n-1;i>=0;i--){
        tmp+=sunn*(s[i]-'0');
        sunn*=2;
        // cout << tmp<<endl;
        if(sunn==8 || i==0){
            // cout << tmp<<endl;
            ans=(char)(tmp+'0')+ans;
            tmp=0;
            sunn=1;
        }
    }
    cout << ans;
}
int main(){
    int T=1;
    // cin >> T;
    while(T--){
        Solve();
    }
    return 0;
}