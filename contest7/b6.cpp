#include<bits/stdc++.h>
using namespace std;
bool solve(string &s){
	stack <char> stk;
	for(int i=0;i<s.length();i++){
		if(s[i]==')'){
			char top= stk.top();
			stk.pop();
			bool ok=true;
			while(top!='('){
				if(top=='+'||top=='-'||top=='*'||top=='/') ok=false;
				top=stk.top();
				stk.pop();
			}
			if(ok==true) return true;
		}
		else stk.push(s[i]);
	}
	return false;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(solve(s)==true) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

