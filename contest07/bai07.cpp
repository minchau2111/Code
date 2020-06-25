// dem so luong dau ngoac can doi chieu it nhat der duoc so ngoac dung

#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<char> sunn;
        for (int i = 0; i < s.size();i++){
            if(s[i]==')' && !sunn.empty()){
                if(sunn.top()=='(') sunn.pop();
                else
                    sunn.push(s[i]);
            }
            else sunn.push(s[i]);
        }
        int dem = 0;
        int x = sunn.size();
        while(sunn.top()=='('){
            sunn.pop();
            dem++;
            if(sunn.empty())
                break;
        }
        cout << x / 2 + dem % 2 << endl;
    }
}