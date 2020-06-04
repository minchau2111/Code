//dao tu
#include<bits/stdc++.h>
using namespace std;

void Solve(){
    string s;
    getline(cin, s);
    int n = s.size();
    stack<char> st;
    for (int i = 0; i <= n;i++){
        if(s[i]==' ' || i==n){
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
            cout << ' ';
        }
        else{
            st.push(s[i]);
        }
    }
    cout << endl;
}

int main(){
    int T;
    cin >> T;
    cin.ignore();
    while(T--){
        Solve();
    }
}