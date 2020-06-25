// bien doi trung to hau to

#include<bits/stdc++.h>

using namespace std;

int isOperator(char x){
    if(x=='^')
        return 3;
    else if(x=='*' || x=='/' || x=='%')
        return 2;
    else if(x=='+' || x=='-')
        return 1;
    else if((x>='a' && x<='z') || (x>='A' && x<='Z'))
        return 0;
    else
        return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        stack<char> sunn;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                sunn.push(s[i]);
            }
            else if(s[i]==')'){
                while(!sunn.empty() && sunn.top()!='('){
                    ans += sunn.top();
                    sunn.pop();
                }
                if(sunn.top()=='(')
                    sunn.pop();
            }   
            else if(isOperator(s[i])==0)
                ans += s[i];
            else{
                while(!sunn.empty() && isOperator(sunn.top())>=isOperator(s[i])){
                    ans += sunn.top();
                    sunn.pop();
                }
            }
        }
        while(!sunn.empty()){
            ans += sunn.top();
            sunn.pop();
        }
        cout << ans;
        cout << endl;
    }
}