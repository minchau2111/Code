#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack <char> k;
		for(int i=0;i<s.length();i++){
			if(k.empty()) k.push(s[i]);
			else{
				if(k.top()=='['){
					if(s[i]==']') k.pop();
					else k.push(s[i]);
				}
				else if(k.top()=='('){
					if(s[i]==')') k.pop();
					else k.push(s[i]);
				}
				else if(k.top()=='{'){
					if(s[i]=='}') k.pop();
					else k.push(s[i]);
				}
			}
		}
		if(!k.empty()) cout<<"NO"<<"\n";
		else cout<<"YES"<<"\n";
	}
	return 0;
}

