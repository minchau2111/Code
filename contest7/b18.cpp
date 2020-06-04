#include<bits/stdc++.h>
using namespace std;
int pri(char c){
	if(c=='^') return 3;
	else if(c=='*'||c=='/') return 2;
	else if(c=='+'||c=='-') return 1;
	else return -1;
}
long long applyOp(long long a, long long b, char op){ 
    switch(op){ 
        case '+': return a + b; 
        case '-': return a - b; 
        case '*': return a * b; 
        case '/': return a / b; 
    } 
}
long long solve(string s){
	stack <char> st;
	stack <long long> sh;
	for(long long i=0;i<s.size();i++){
		if(s[i]==' ') continue;
		else if(s[i]=='(') st.push('(');
		else if(isdigit(s[i])){
			long long res=0;
			while(isdigit(s[i])&&i<s.length()){
				res=res*10+(s[i]-'0');
				i++;
			}
			i--;
			sh.push(res);
		}
		else if(s[i]==')'){
			while(st.top()!='('&&!st.empty()){
				long long op1= sh.top();
				sh.pop();
				long long op2= sh.top();
				sh.pop();
				char c= st.top();
				st.pop();
				long long tmp= applyOp(op2,op1,c);
				sh.push(tmp);
			}
			if(!st.empty()) st.pop();
		}
		else{
			while(!st.empty()&&pri(s[i])<=pri( st.top())){
				long long op1= sh.top();
				sh.pop();
				long long op2= sh.top();
				sh.pop();
				char c= st.top();
				st.pop();
				long long tmp= applyOp(op2,op1,c);
				sh.push(tmp);
			}
			st.push(s[i]);
		}
	}
	while(!st.empty()){
		long long op1= sh.top();
		sh.pop();
		long long op2= sh.top();
		sh.pop();
		char c= st.top();
		st.pop();
		long long tmp= applyOp(op2,op1,c);
		sh.push(tmp);
	}
	return sh.top();
}
int main(){
	int t; cin>>t;
	string s;
	cin.ignore();
	while(t--){
		getline(cin,s);
		cout<<solve(s)<<endl;
	}
	return 0;
}

