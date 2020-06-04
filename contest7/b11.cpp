#include<bits/stdc++.h>
using namespace std;
int pri(char c){
	if(c=='^') return 3;
	else if(c=='*'||c=='/') return 2;
	else if(c=='+'||c=='-') return 1;
	else return -1;
}

void solve(string s){
	string res;
	stack <char> st;
	st.push('E');
	for(int i=0;i<s.length();i++){
		if((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')) res+=s[i];
		else if(s[i]=='(') st.push('(');
		else if(s[i]==')'){
			while(st.top()!='E'&&st.top()!='('){
				char c= st.top();
				st.pop();
				res+=c;
			}
			if(st.top()=='('){
				st.pop();
			}
		}
		else{
			while(st.top()!='E'&&pri(st.top())>=pri(s[i])){
				char c= st.top();
				st.pop();
				res+=c;
			}
			st.push(s[i]);
		}
	}
	while(st.top()!='E'){
		char c= st.top();
		st.pop();
		if(c!='('&&c!=')') res+=c;
	}
	cout<<res<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		solve(s);
	}
	return 0;
}

