#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack <char> k;
		int d=0;
		for(int i=0;i<s.length();i++){
			if(s[i]==')'){
				if(k.empty()){
					d++;
					k.push('(');
				}
				else if(k.top()=='(') k.pop();
			}
			if(s[i]=='('){
				k.push('(');
			}
		}
		cout<<d+(k.size()/2)<<endl;
	}
	return 0;
}

