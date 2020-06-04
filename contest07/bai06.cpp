// kiem tra bieu thuc dung

#include<bits/stdc++.h>

using namespace std;

bool check(string &s){
    stack<char> mincy;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==')'){
            char x = mincy.top();
            mincy.pop();
            bool ok = true;
            while(x!='('){
                if(x=='+' || x=='-' || x=='*' || x=='/')
                    ok = false;
                x = mincy.top();
                mincy.pop();
                
            }
            if(ok==true)
                return true;
        }
        else
            mincy.push(s[i]);
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        if(check(s)==true)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}