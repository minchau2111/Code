// kiem tra bieu thuc dung

#include<bits/stdc++.h>

using namespace std;

bool isOperator(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return true;
    return false;
}
void check(string &s){
    stack<char> mincy;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='(' || isOperator(s[i])) mincy.push(s[i]);
        if(s[i]==')'){
            if(mincy.top()=='('){
                cout << "Yes" << endl;
                return;
            }
            else{
                while(mincy.top()!='(' && !mincy.empty()){
                    mincy.pop();
                }
                if(!mincy.empty())
                    mincy.pop();
            }
        }
   }
   cout << "No" << endl;

}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        check(s);
    }
}