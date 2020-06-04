#include<bits/stdc++.h>
using namespace std;
string solve(string &s){
	stack <char> st;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				if(st.empty()) continue;
				else if(st.top()=='-'){
					int j=i+1;
					while(s[j]!=')'&&s[j]!='('&&j<s.length()){
						if(s[j]=='+') s[j]='-';
						else if(s[j]=='-') s[j]='+';
						j++;
					}
				}
			}
			else if(s[i]==')') continue;
			else st.push(s[i]);
		}
		string res="";
		while(!st.empty()){
			res=st.top()+res;
			st.pop();
		}
	return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		if(solve(s1)==solve(s2)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

